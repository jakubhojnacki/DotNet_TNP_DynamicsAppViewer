#include <QFileDialog>

#include "AboutView.hpp"
#include "MainController.hpp"

MainController::MainController(QObject* pParent)
    : QObject { pParent } {
}

MainController::MainController(const MainModel& pModel, QObject* pParent)
    : QObject { pParent }, model { pModel } {
}

const QString MainController::title() const {
    return this->model.title();
}

void MainController::open(QWidget* pParent) {
    if (!(this->model.fileOpened())) {
        QFileDialog fileDialog { pParent, tr("Select Application File"), "", tr("Application Files (*.app)") };
        fileDialog.setFileMode(QFileDialog::FileMode::ExistingFile);
        if (fileDialog.exec()) {
            QStringList selectedFiles = fileDialog.selectedFiles();
            if (!(selectedFiles.isEmpty())) {
                this->model.fileOpened(true);
                this->model.filePath(selectedFiles[0]);
                emit this->update();
            }
        }
    }
}

void MainController::close() {
}

void MainController::about(QWidget* pParent) {
    AboutView aboutView { pParent };
    aboutView.exec();
}

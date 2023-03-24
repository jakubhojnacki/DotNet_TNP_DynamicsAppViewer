#include "AboutDialog.hpp"
#include "MainController.hpp"

MainController::MainController(QObject* pParent)
    : QObject { pParent } {
}

MainController::MainController(const MainModel& pModel, QObject* pParent)
    : QObject { pParent }, model { pModel } {
}

const QString& MainController::title() const {
    return this->model.title();
}

bool MainController::open() {
    return false;
}

bool MainController::close() {
    return false;
}

bool MainController::exit() {
    return true;
}

void MainController::about() {
    AboutDialog aboutDialog;
    aboutDialog.show();
}

#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* pParent)
    : QMainWindow { pParent }, ui { new Ui::MainWindow } {
    this->ui->setupUi(this);
    this->initialise();
}

MainWindow::MainWindow(const MainController& pController, QWidget* pParent)
    : QMainWindow { pParent }, controller { pController }, ui { new Ui::MainWindow } {
    this->ui->setupUi(this);
    this->initialise();
}

MainWindow::~MainWindow() {
    if (this->ui != nullptr)
        delete ui;
}

void MainWindow::initialise() {
    this->setWindowTitle(this->controller.title());
}

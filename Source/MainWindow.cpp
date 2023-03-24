#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* pParent)
    : QMainWindow { pParent }, ui { new Ui::MainWindow } {
    this->initialiseController(nullptr);
    this->ui->setupUi(this);
    this->initialise();
}

MainWindow::MainWindow(const MainController* pController, QWidget* pParent)
    : QMainWindow { pParent }, ui { new Ui::MainWindow } {
    this->initialiseController(pController);
    this->ui->setupUi(this);
    this->initialise();
}

MainWindow::~MainWindow() {
    if (this->ui != nullptr)
        delete ui;
}

void MainWindow::initialiseController(const MainController* pController) {
    if (pController != nullptr)
        this->controller = const_cast<MainController*>(pController);
    else
        this->controller = new MainController(this);
}

void MainWindow::initialise() {
    this->setWindowTitle(this->controller->title());

    /*
    QObject::connect(this->ui->openAction, SIGNAL(triggered(bool)), this, SLOT(open()));
    QObject::connect(this->ui->closeAction, SIGNAL(triggered(bool)), this, SLOT(close()));
    QObject::connect(this->ui->exitAction, SIGNAL(triggered(bool)), this, SLOT(exit()));
    QObject::connect(this->ui->aboutAction, SIGNAL(triggered(bool)), this, SLOT(about()));
    */
}

/*
void MainWindow::update() {

}

void MainWindow::open() {
    if (this->controller->open())
        this->update();
}

void MainWindow::close() {
    if (this->controller->close())
        this->update();
}

void MainWindow::exit() {
    if (this->controller->exit())
        this->exit();
}

void MainWindow::about() {
    this->controller->about();
}
*/

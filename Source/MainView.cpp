#include "MainView.hpp"
#include "ui_MainView.h"

MainView::MainView(QWidget* pParent)
    : QMainWindow { pParent }, ui { new Ui::MainView } {
    this->initialise(nullptr);
}

MainView::MainView(const MainController* pController, QWidget* pParent)
    : QMainWindow { pParent }, ui { new Ui::MainView } {
    this->initialise(pController);
}

MainView::~MainView() {
    if (this->ui != nullptr)
        delete this->ui;
}

void MainView::initialise(const MainController* pController) {
    this->initialiseController(pController);
    this->ui->setupUi(this);
    this->initialiseWindow();
    this->initialiseSignalsAndSlots();
}

void MainView::initialiseController(const MainController* pController) {
    if (pController != nullptr)
        this->controller = const_cast<MainController*>(pController);
    else
        this->controller = new MainController(this);
}

void MainView::initialiseWindow() {
    this->setWindowTitle(this->controller->title());
}

void MainView::initialiseSignalsAndSlots() {
    QObject::connect(this->controller, SIGNAL(update()), this, SLOT(onUpdate()));

    QObject::connect(this->ui->openAction, SIGNAL(triggered(bool)), this, SLOT(onOpen()));
    QObject::connect(this->ui->closeAction, SIGNAL(triggered(bool)), this, SLOT(onClose()));
    QObject::connect(this->ui->exitAction, SIGNAL(triggered(bool)), this, SLOT(onExit()));
    QObject::connect(this->ui->aboutAction, SIGNAL(triggered(bool)), this, SLOT(onAbout()));
}

void MainView::onOpen() {
    this->controller->open(this);
}

void MainView::onClose() {
    this->controller->close();
}

void MainView::onExit() {
    this->close();
}

void MainView::onAbout() {
    this->controller->about(this);
}

void MainView::onUpdate() {

}

#include "Application.hpp"

Application::Application(int pArgC, char* pArgV[])
    : QApplication { pArgC, pArgV } {
}

Application::~Application() {
    if (this->mainView != nullptr)
        delete this->mainView;
}

int Application::run() {
    this->mainView = new MainView();
    this->mainView->show();
    return this->exec();
}

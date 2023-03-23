#include "Application.hpp"

Application::Application(int pArgC, char* pArgV[])
    : QApplication { pArgC, pArgV } {
}

Application::~Application() {
    if (this->mainWindow != nullptr)
        delete this->mainWindow;
}

int Application::run() {
    this->mainWindow = new MainWindow { };
    this->mainWindow->show();
    return this->exec();
}

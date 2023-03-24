#include "Application.hpp"

Application::Application(int pArgC, char* pArgV[])
    : QApplication { pArgC, pArgV } {
}

int Application::run() {
    this->mainWindow.show();
    return this->exec();
}

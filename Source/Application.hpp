#pragma once

#include <QApplication>

#include "MainWindow.hpp"

class Application : public QApplication {

    public:
        Application(int pArgC, char* pArgV[]);
        ~Application();

    private:
        MainWindow* mainWindow { nullptr };

    public:
        int run();

};


#pragma once

#include <QApplication>

#include "MainWindow.hpp"

class Application : public QApplication {

    public:
        Application(int pArgC, char* pArgV[]);

    private:
        MainWindow mainWindow;

    public:
        int run();

};


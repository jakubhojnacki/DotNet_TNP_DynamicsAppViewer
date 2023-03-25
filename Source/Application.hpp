#pragma once

#include <QApplication>

#include "MainView.hpp"

class Application : public QApplication {

    public:
        Application(int pArgC, char* pArgV[]);
        ~Application();

    private:
        MainView* mainView;

    public:
        int run();

};


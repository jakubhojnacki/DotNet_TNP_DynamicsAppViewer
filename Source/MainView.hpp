#pragma once

#include <QMainWindow>

#include "MainController.hpp"

namespace Ui {
    class MainView;
}

class MainView : public QMainWindow {

    Q_OBJECT

    public:
        explicit MainView(QWidget *parent = nullptr);
        MainView(const MainController* pController, QWidget* pParent = nullptr);
        ~MainView();

    private:
        MainController* controller { };
        Ui::MainView *ui;

    private:
        void initialise(const MainController* pController);
        void initialiseController(const MainController* pController);
        void initialiseWindow();
        void initialiseSignalsAndSlots();

    private slots:
        void onOpen();
        void onClose();
        void onExit();
        void onAbout();
        void onUpdate();
};


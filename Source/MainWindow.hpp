#pragma once

#include <QMainWindow>

#include "MainController.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {

    Q_OBJECT

    public:
        MainWindow(QWidget* pParent = nullptr);
        MainWindow(const MainController* pController, QWidget* pParent = nullptr);
        ~MainWindow();

    private:
        MainController* controller { };
        Ui::MainWindow* ui { nullptr };

    private:
        void initialiseController(const MainController* pController);
        void initialise();
        void update();

    /*
    private slots:
        void open();
        void close();
        void exit();
        void about();
    */
};

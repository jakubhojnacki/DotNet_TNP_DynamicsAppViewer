#pragma once

#include <QDialog>

#include "AboutController.hpp"

namespace Ui {
    class AboutView;
}

class AboutView : public QDialog {

    Q_OBJECT

    public:
        explicit AboutView(QWidget* pParent = nullptr);
        AboutView(const AboutController* pController, QWidget* pParent = nullptr);
        ~AboutView();

    private:
        AboutController* controller;
        Ui::AboutView *ui;

    private:
        void initialise(const AboutController* pController);
        void initialiseController(const AboutController* pController);
        void initialiseWindow();

};


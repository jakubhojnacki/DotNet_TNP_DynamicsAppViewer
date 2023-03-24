#pragma once

#include <QDialog>

#include "AboutController.hpp"

namespace Ui {
    class AboutDialog;
}

class AboutDialog : public QDialog {

    Q_OBJECT

    public:
        explicit AboutDialog(QWidget* pParent = nullptr);
        AboutDialog(const AboutController* pController, QWidget* pParent = nullptr);
        ~AboutDialog();

    private:
        AboutController* controller;
        Ui::AboutDialog *ui;

    private:
        void initialiseController(const AboutController* pController);
};


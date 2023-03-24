#include "AboutDialog.hpp"
#include "ui_AboutDialog.h"

AboutDialog::AboutDialog(QWidget* pParent)
    : QDialog { pParent }, ui { new Ui::AboutDialog } {
    this->initialiseController(nullptr);
    this->ui->setupUi(this);
}

AboutDialog::AboutDialog(const AboutController* pController, QWidget* pParent)
    : QDialog { pParent }, ui { new Ui::AboutDialog } {
    this->initialiseController(pController);
    this->ui->setupUi(this);
}

AboutDialog::~AboutDialog() {
    if (this->ui != nullptr)
        delete this->ui;
}

void AboutDialog::initialiseController(const AboutController* pController) {
    if (pController != nullptr)
        this->controller = const_cast<AboutController*>(pController);
    else
        this->controller = new AboutController(this);
}

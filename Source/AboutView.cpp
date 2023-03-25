#include "AboutView.hpp"
#include "ui_AboutView.h"

AboutView::AboutView(QWidget* pParent)
    : QDialog { pParent }, ui { new Ui::AboutView } {
    this->initialise(nullptr);
}

AboutView::AboutView(const AboutController* pController, QWidget* pParent)
    : QDialog { pParent }, ui { new Ui::AboutView } {
    this->initialise(pController);
}

AboutView::~AboutView() {
    if (this->ui != nullptr)
        delete this->ui;
}

void AboutView::initialise(const AboutController* pController) {
    this->initialiseController(pController);
    this->ui->setupUi(this);
    this->initialiseWindow();
}

void AboutView::initialiseController(const AboutController* pController) {
    if (pController != nullptr)
        this->controller = const_cast<AboutController*>(pController);
    else
        this->controller = new AboutController { this };
}

void AboutView::initialiseWindow() {
    this->setWindowTitle(this->controller->title());

    this->ui->nameLabel->setText(this->controller->name());
    this->ui->descriptionLabel->setText(this->controller->description());
    this->ui->versionLabel->setText(this->controller->version().toString());
    this->ui->authorLabel->setText(this->controller->author());
    this->ui->dateLabel->setText(this->controller->date());
}

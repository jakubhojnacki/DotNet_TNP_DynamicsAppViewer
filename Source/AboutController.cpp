#include "AboutController.hpp"

AboutController::AboutController(QObject* pParent)
    : QObject { pParent } {
}

AboutController::AboutController(const AboutModel& pModel, QObject* pParent)
    : QObject { pParent }, model { pModel } {
}

const QString AboutController::title() const {
    return this->model.title();
}

const QString AboutController::name() const {
    return this->model.name();
}

const QString AboutController::description() const {
    return this->model.description();
}

const Version AboutController::version() const {
    return this->model.version();
}

const QString AboutController::author() const {
    return this->model.author();
}

const QString AboutController::date() const {
    return this->model.date();
}

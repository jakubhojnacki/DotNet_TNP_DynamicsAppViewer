#include "MainModel.hpp"
#include "Manifest.hpp"

MainModel::MainModel()
    : mTitle { MainModel::createTitle() } {
}

const QString& MainModel::title() const {
    return this->mTitle;
}

QString createTitle() {
    return (QString { "%1 %2; %3; %4" }).arg(Manifest::name(), Manifest::version().toString(), Manifest::author(), Manifest::date());
}

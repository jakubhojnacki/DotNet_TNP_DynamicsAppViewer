#include "MainModel.hpp"
#include "Manifest.hpp"

MainModel::MainModel() {
}

QString MainModel::title() const {
    return (QString { "%1 %2; %3; %4" }).arg(Manifest::name(), Manifest::version().toString(), Manifest::author(), Manifest::date());
}

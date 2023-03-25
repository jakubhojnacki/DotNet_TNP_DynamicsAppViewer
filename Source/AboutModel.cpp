#include "AboutModel.hpp"
#include "Manifest.hpp"

AboutModel::AboutModel() {
}

const QString AboutModel::title() const {
    return (QString { "About %1" }).arg(Manifest::name());
}

const QString AboutModel::name() const {
    return Manifest::name();
}

const QString AboutModel::description() const {
    return Manifest::descripion();
}

const Version AboutModel::version() const {
    return Manifest::version();
}

const QString AboutModel::author() const {
    return Manifest::author();
}

const QString AboutModel::date() const {
    return Manifest::date();
}

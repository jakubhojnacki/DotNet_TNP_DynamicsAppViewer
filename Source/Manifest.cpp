#include "Manifest.hpp"

Manifest::Manifest() {
}

QString Manifest::name() {
    return QString { "Dynamics APP Viewer" };
}

QString Manifest::descripion() {
    return QString { "Viewer for Dynamics 365 Business Central application files" };
}

Version Manifest::version() {
    return Version { 0, 1, 0, 1 };
}

QString Manifest::author() {
    return QString { "Jakub Hojnacki <jakubhojnacki@gmail.com>" };
}

QString Manifest::date() {
    return QString { "March 2023" };
}

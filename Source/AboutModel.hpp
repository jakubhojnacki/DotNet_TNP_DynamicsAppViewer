#pragma once

#include <QString>

#include "Version.hpp"

class AboutModel {

    public:
        AboutModel();

    public:
        const QString name() const;
        const QString description() const;
        const Version version() const;
        const QString author() const;
        const QString date() const;

};


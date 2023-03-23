#pragma once

#include <QString>

#include "Version.hpp"

class Manifest {

    private:
        Manifest();

    public:
        static QString name();
        static QString descripion();
        static Version version();
        static QString author();
        static QString date();

};


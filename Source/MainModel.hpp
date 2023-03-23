#pragma once

#include <QString>

class MainModel {

    public:
        MainModel();

    private:
        QString mTitle { "" };

    public:
        QString title() const;

};


#pragma once

#include <QString>

class MainModel {

    public:
        MainModel();

    private:
        QString mTitle;

    public:
        const QString& title() const;

    private:
        static QString createTitle();

};


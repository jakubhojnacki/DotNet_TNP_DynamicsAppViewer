#pragma once

#include <QObject>

#include "AboutModel.hpp"

class AboutController : public QObject {

    Q_OBJECT

    public:
        explicit AboutController(QObject* pParent = nullptr);
        AboutController(const AboutModel& pModel, QObject* pParent = nullptr);

    private:
        AboutModel model;

    public:
        const QString title() const;
        const QString name() const;
        const QString description() const;
        const Version version() const;
        const QString author() const;
        const QString date() const;

};


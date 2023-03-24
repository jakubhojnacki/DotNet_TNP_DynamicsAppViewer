#pragma once

#include <QObject>

#include "MainModel.hpp"

class MainController : public QObject {
    Q_OBJECT
    Q_DISABLE_COPY(MainController)

    public:
        MainController(QObject* pParent = nullptr);
        MainController(const MainModel& pModel, QObject* pParent = nullptr);

    private:
        MainModel model { };

    public:
        const QString& title() const;
};


#pragma once

#include <QObject>

#include "MainModel.hpp"

class MainController : public QObject {

    Q_OBJECT

    public:
        explicit MainController(QObject* pParent = nullptr);
        MainController(const MainModel& pModel, QObject* pParent = nullptr);

    private:
        MainModel model { };

    public:
        const QString title() const;

    public:
        void open(QWidget* pParent = nullptr);
        void close();
        void about(QWidget* pParent = nullptr);

    signals:
        void update();

};


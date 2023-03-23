#pragma once

#include "MainModel.hpp"

class MainController {

    public:
        MainController();
        MainController(const MainModel& pModel);

    private:
        MainModel model { };

    public:
        QString title() const;
};


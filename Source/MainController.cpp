#include "MainController.hpp"

MainController::MainController() {
}

MainController::MainController(const MainModel& pModel)
    : model { pModel } {
}

QString MainController::title() const {
    return this->model.title();
}

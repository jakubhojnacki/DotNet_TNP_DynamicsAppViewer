#include "MainModel.hpp"
#include "Manifest.hpp"

MainModel::MainModel() {
}

const QString MainModel::title() const {
    return (QString { "%1 %2" }).arg(Manifest::name(), Manifest::version().toString());
}

bool MainModel::fileOpened() const {
    return this->mFileOpened;
}

const QString& MainModel::filePath() const {
    return this->mFilePath;
}

void MainModel::fileOpened(const bool pValue) {
    this->mFileOpened = pValue;
}

void MainModel::filePath(const QString& pValue) {
    this->mFilePath = pValue;
}

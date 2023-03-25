#pragma once

#include <QString>

class MainModel {

    public:
        MainModel();

    private:
        bool mFileOpened { false };
        QString mFilePath;

    public:
        const QString title() const;
        bool fileOpened() const;
        const QString& filePath() const;

    public:
        void fileOpened(const bool pValue);
        void filePath(const QString& pValue);

};


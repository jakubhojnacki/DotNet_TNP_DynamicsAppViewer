#pragma once

#include <QString>

class Version {

    public:
        Version();
        Version(const int pMajor, const int pMinor);
        Version(const int pMajor, const int pMinor, const int pHotfix);
        Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild);

    private:
        int mMajor;
        int mMinor;
        int mHotfix;
        int mBuild;

    public:
        const int& major() const;
        int& major();
        const int& minor() const;
        int& minor();
        const int& hotfix() const;
        int& hotfix();
        const int& build() const;
        int& build();

    public:
        bool operator == (const Version& pVersion) const;
        bool operator != (const Version& pVersion) const;
        bool operator < (const Version& pVersion) const;
        bool operator <= (const Version& pVersion) const;
        bool operator > (const Version& pVersion) const;
        bool operator >= (const Version& pVersion) const;

    public:
        int compare(const Version& pVersion) const;
        QString toString() const;

};


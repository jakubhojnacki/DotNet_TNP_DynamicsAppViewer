#pragma once

#include <QString>

class Version {

    public:
        Version();
        Version(const int pMajor, const int pMinor);
        Version(const int pMajor, const int pMinor, const int pHotfix);
        Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild);

    private:
        int mMajor { 0 };
        int mMinor { 0 };
        int mHotfix { 0 };
        int mBuild { 0 };

    public:
        int major() const;
        void major(const int pValue);
        int minor() const;
        void minor(const int pValue);
        int hotfix() const;
        void hotfix(const int pValue);
        int build() const;
        void build(const int pValue);

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


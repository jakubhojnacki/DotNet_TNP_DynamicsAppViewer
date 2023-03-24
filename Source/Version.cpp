#include "Int.hpp"
#include "Version.hpp"

Version::Version() {
}

Version::Version(const int pMajor, const int pMinor)
    : mMajor { pMajor }, mMinor { pMinor } {
}

Version::Version(const int pMajor, const int pMinor, const int pHotfix)
    : mMajor { pMajor }, mMinor { pMinor }, mHotfix { pHotfix } {
}

Version::Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild)
    : mMajor { pMajor }, mMinor { pMinor }, mHotfix { pHotfix }, mBuild { pBuild } {
}

const int& Version::major() const {
    return this->mMajor;
}

int& Version::major() {
    return this->mMajor;
}

const int& Version::minor() const {
    return this->mMinor;
}

int& Version::minor() {
    return this->mMinor;
}

const int& Version::hotfix() const {
    return this->mHotfix;
}

int& Version::hotfix() {
    return this->mHotfix;
}

const int& Version::build() const {
    return this->mBuild;
}

int& Version::build() {
    return this->mBuild;
}

bool Version::operator == (const Version& pVersion) const {
    return (this->compare(pVersion) == 0);
}

bool Version::operator != (const Version& pVersion) const {
    return (this->compare(pVersion) != 0);
}

bool Version::operator < (const Version& pVersion) const {
    return (this->compare(pVersion) < 0);
}

bool Version::operator <= (const Version& pVersion) const {
    return (this->compare(pVersion) <= 0);
}

bool Version::operator > (const Version& pVersion) const {
    return (this->compare(pVersion) > 0);
}

bool Version::operator >= (const Version& pVersion) const {
    return (this->compare(pVersion) >= 0);
}

int Version::compare(const Version& pVersion) const {
    int result = (Int { this->major() }).compare(pVersion.major());
    if (result == 0)
        result = (Int { this->minor() }).compare(pVersion.minor());
    if (result == 0)
        result = (Int { this->hotfix() }).compare(pVersion.hotfix());
    if (result == 0)
        result = (Int { this->build() }).compare(pVersion.build());
    return result;
}

QString Version::toString() const {
    return (QString { "%1.%2.%3.%4" }).arg(this->major()).arg(this->minor()).arg(this->hotfix()).arg(this->build());
}

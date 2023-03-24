#include "Int.hpp"

Int::Int() {
}

Int::Int(const int& pValue)
    : mValue { pValue } {
}

const int& Int::value() const {
    return this->mValue;
}

int& Int::value() {
    return this->mValue;
}

int Int::compare(const int& pValue) const {
    return (this->value() > pValue ? 1 : (this->value() < pValue ? -1 : 0));
}

int Int::compare(const Int& pValue) const {
    return this->compare(pValue.value());
}

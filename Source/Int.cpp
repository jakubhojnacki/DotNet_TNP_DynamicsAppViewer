#include "Int.hpp"

Int::Int() {
}

Int::Int(const int pValue)
    : mValue { pValue } {
}

int Int::value() const {
    return this->mValue;
}

void Int::value(const int pValue) {
    this->mValue = pValue;
}

int Int::compare(int pValue) const {
    return (this->value() > pValue ? 1 : (this->value() < pValue ? -1 : 0));
}

int Int::compare(Int pValue) const {
    return this->compare(pValue.value());
}

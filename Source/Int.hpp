#pragma once

class Int {

    public:
        Int();
        Int(const int& pValue);

    private:
        int mValue;

    public:
        int value() const;

    public:
        void value(int pValue);

    public:
        int compare(const int pValue) const;
        int compare(const Int& pValue) const;

};


#pragma once

class Int {

    public:
        Int();
        Int(const int pValue);

    private:
        int mValue { 0 };

    public:
        int value() const;
        void value(const int pValue);

    public:
        int compare(int pValue) const;
        int compare(Int pValue) const;

};


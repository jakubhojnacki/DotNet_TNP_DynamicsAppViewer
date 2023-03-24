#pragma once

class Int {

    public:
        Int();
        Int(const int& pValue);

    private:
        int mValue;

    public:
        const int& value() const;
        int& value();

    public:
        int compare(const int& pValue) const;
        int compare(const Int& pValue) const;

};


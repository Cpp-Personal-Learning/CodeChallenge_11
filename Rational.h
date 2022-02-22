#pragma once
#include <string>

class Rational
{
        int n = 0;
        int d = 1;
    public:
        Rational(int numerator = 0, int denominator = 1) : n(numerator), d(denominator) {};
        Rational(const Rational& rhs) : n(rhs.n), d(rhs.d) {};    // copy constructor
        ~Rational();
        int numerator() const { return n; };
        int denominator() const { return d; };
        Rational& operator = (const Rational&);
        Rational reduce() const;        // reduce fraction
        std::string string() const;     // return a formatted STL string
        std::string raw_string() const;     // return a non-reduced STL string
};


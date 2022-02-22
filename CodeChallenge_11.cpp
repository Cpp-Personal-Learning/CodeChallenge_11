// CodeChallenge_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rational.h"

// useful for std::cout
std::ostream& operator << (std::ostream& o, const Rational& r) {
    return o << r.string();
}


Rational operator + (const Rational& lhs, const Rational& rhs) {
    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

Rational operator - (const Rational& lhs,const Rational& rhs) {
    return Rational((lhs.numerator() * rhs.denominator()) - (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

Rational operator * (const Rational& lhs,const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}

Rational operator / (const Rational& lhs,const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.denominator(), lhs.denominator() * rhs.numerator());
}


int main()
{
    Rational a(4, 3);        // 1 1/3

    std::cout << a << " + " << 20 << " = " << a + 20 << std::endl;
    std::cout << a << " - " << 20 << " = " << a - 20 << std::endl;
    std::cout << a << " * " << 20 << " = " << a * 20 << std::endl;
    std::cout << a << " / " << 20 << " = " << a / 20 << std::endl;

    std::cout << std::endl;

    std::cout << 20 << " + " << a << " = " << 20 + a << std::endl;
    std::cout << 20 << " - " << a << " = " << 20 - a << std::endl;
    std::cout << 20 << " * " << a << " = " << 20 * a << std::endl;
    std::cout << 20 << " / " << a << " = " << 20 / a << std::endl;

    return 0;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

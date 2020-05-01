#include <iostream>
#include "Q4.h"
#include <string>

using namespace std;

//Part A
Complex::Complex() {
    a = 0;
    b = 0;
}

Complex::Complex(int a, int b) {
    this->a = a;
    this->b = b;
}

int Complex::getA() {
    return this->a;
}

void Complex::setA(int a) {
    this->a = a;
}

int Complex::getB() {
    return this->b;
}

void Complex::setB(int b) {
    this->b = b;
}

//Part B

string Complex::toString() const {
    string astring = to_string(this->a);
    string bstring = to_string(this->b);

    return astring + "+" + bstring + "i";
}

//Part C

Complex Complex::operator +(const Complex &c2) { 
    int newa = this->a + c2.a;
    int newb = this->b + c2.b;

    return Complex(newa, newb);
}

bool operator ==(const Complex &c1, const Complex &c2) {
    return (c1.a == c2.a && c1.b == c2.b);
}




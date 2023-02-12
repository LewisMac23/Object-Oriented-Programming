// OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Operator overloading
-C++ allows you to specify more than one definition for an operator in the same scope, which is called operator overloading.
-You can redefine or overload most of the built-in operators available in C++.
-It is a type of polymorphism in which an operator is overloaded to give user defined meaning to it.
-Almost any operator can be overloaded in C++. However there are a few operators which can not be overloaded. Operators that are not overloaded are as follows:
    -scope operator(::)
    -sizeof
    -member selector -(.)
    -member pointer selector - (*)
    -ternary operator - (?:)
*/ 

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void print() {
        cout << real << "+" << imag << "i" << endl;
    }

    // Operator overloading syntax
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
    Complex c1(5, 4);
    Complex c2(2, 3);
    Complex c3(1, 1);
    Complex c4;

    //c1++; // unary operator

    c4 = c1+c2+c3; //c3 = c1.add(c2);

    c4.print();

    return 0;
}


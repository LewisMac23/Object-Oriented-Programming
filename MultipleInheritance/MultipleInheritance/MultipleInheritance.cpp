// MultipleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Multiple Inheritance

/*
-Multiple Inheritance is a feature of C++ where a class can inherit from more than one class.
*/

#include <iostream>
using namespace std;

// base class 1
class A {
public:
    void printMessage()
    {
        cout << "Class A print message function" << endl;
    }
};

// base class 2
class B {
public:
    void printMessage()
    {
        cout << "Class B print message function" << endl;
    }
};

// Derived class
class AB : public A, public B {

public:
    void printMessage()
    {
        A::printMessage();
        B::printMessage();
        cout << "Class AB print message" << endl;
    }

    // printMessage() -> Class A
    // printMessage() -> Class B

};

int main()
{
    AB Obj;
    Obj.printMessage();

    
    return 0;
}


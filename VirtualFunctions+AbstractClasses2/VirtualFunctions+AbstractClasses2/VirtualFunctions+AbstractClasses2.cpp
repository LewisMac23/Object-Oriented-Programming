// VirtualFunctions+AbstractClasses2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Real world example of code discussed in last part 

#include <iostream>
using namespace std;


// base class
class Animal
{
public:
    virtual void eat() {
        cout << "I'm eating generic food.";
    }
};

// Derived Class 1
class Cat : public Animal
{
public:
    void eat() {
        cout << "I'm eating cat food.";
    }
};

// Derived Class 2
class Dog : public Animal
{
public:
    void eat() {
        cout << "I'm eating dog food.";
    }
};

void function1(Animal* xyz)
{
    xyz->eat();
}

int main()
{
    Animal* ptr;

    Cat catObj;
    Dog dogObj;

    ptr = &catObj;

    function1(ptr);

    ptr = &dogObj;
    function1(ptr);

    return 0;
}


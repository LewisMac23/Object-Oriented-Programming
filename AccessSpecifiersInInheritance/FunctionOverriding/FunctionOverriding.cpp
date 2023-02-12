// FunctionOverriding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Function overriding vs function overloading

/*
Function overloading
-Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
-Function overloading can be considered as an example of polymorphism feature in C++
*/

/*
Function Overriding
-If derived class defines same function as defined in its base class, it is known as function overriding in C++.
-If you create an object of the derived class and call the member function which exists in both classes (base and
derived), the member function of the derived class is invoked and the function of the base class is ignored.
-It enables you to provide specific implementation of the function which is already provided by its base class.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound()
    {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {

public:
    void makeSound()
    {
        cout << "Dogs bark";
    }
};

class Cat : public Animal {
public:
    void makeSound() {

        cout << "Cats meow";
    }
};

int main()
{
    
    Animal a1;
    a1.makeSound();
    cout << endl;
    Dog d1;
    d1.makeSound();
    cout << endl;
    Cat c1;
    c1.makeSound();

    return 0;
}

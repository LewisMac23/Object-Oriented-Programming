// VirtualFunctions+AbstractClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Virtual Functions
-A virtual function is a member function which is declared within base class and is re-defined (overridden) by derived class.
-When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for
that object and execute the derived class's version of the function.
    -Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer)
    used for function call.
    -They are mainly used to achieve Runtime polymorphism.
    -Functions are decalred with a virtual keyword in base class.
    -The resolving of function call is done at run-time.
*/
/*
Abstract Class
-Sometimes implementation of all function cannot be provided in a base class becasue we don't know the implementation. Such a class
is called an abstract class.
-A pure virtual function (or abstract function) in C++ is a virtual function for which we don't have implementation, we only declare
it. A pure virtual function is declared by assigning 0 in declaration.
-Some important facts:
    -A class is absstract is it has at least one pure virtual function.
    -We can have pointers and references of abstract class tyope.
    -If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
    -Abstract classes cannot be instantiated.
*/


#include <iostream>
using namespace std;

class myBase {

public:
    void show()
    {
        cout << "Base class show function called" << endl;
    }
    virtual void print()
    {
        cout << "Base class print function called" << endl;
    }
};

class myDerived : public myBase {

    void show()
    {
        cout << "Derived class show function called" << endl;
    }
    void print()
    {
        cout << "Derived class print function called" << endl;
    }
};


int main()
{
    myBase* baseptr;
    myDerived derivedObj;

    baseptr = &derivedObj;

    // run time polymorphism
    baseptr->print();   // derived class print function was called
    baseptr->show();    // base class show function was called


    return 0;
}


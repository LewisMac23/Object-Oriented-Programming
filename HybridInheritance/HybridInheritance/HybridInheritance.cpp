// HybridInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
-Hybird inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchial Inheritance and Multiple Inheritance.
*/

#include <iostream>
using namespace std;

class base {
protected:
    int val;
};

class derived1 : virtual public base {
public:
    derived1()
    {
        val = 1;
    }
    void getValue()
    {
        cout << "Derived 1 value of datamember is:" << val;
    }
};

class derived2 : virtual public base {
public:
    derived2()
    {
        val = 2;
    }
    void getValue()
    {
        cout << "Derived 2 value of datamember is: " << val;
    }
};

class derived3 : public derived1, public derived2 {

//2 copies of val in derived3
public:
    void getValue()
    {
        //cout << "Int value is:";
        derived2::getValue();
    }

};

int main()
{
    
    derived3 obj;
    obj.getValue();

    return 0;
}


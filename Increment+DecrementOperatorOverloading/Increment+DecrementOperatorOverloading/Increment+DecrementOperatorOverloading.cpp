// Increment+DecrementOperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

class Weight {
private:
    int kg;
public:
    Weight() {
        kg = 0;
    }
    Weight(int x) {
        kg = x;
    }

    void printWeight() {
        cout << "Weight in KG : " << kg << endl;
    }

    Weight operator ++()
    {
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }
    void operator ++(int)
    {
        kg++;
    }
    void operator --()
    {
        --kg;
    }
    void operator --(int)
    {
        kg--;
    }
};

int main()
{
    Weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;              //obj.operator ++()
    obj.printWeight();

    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();

    Weight obj1, obj2;
    obj2 = ++obj1;

    obj2.printWeight();

    return 0;
}


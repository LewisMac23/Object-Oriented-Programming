// FriendClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Friend Class in C++
-A class can also be declared to be the friend of some other class. When we create a friend class then all the member functions of the
friend class also become the friend of the other class. This requires the condition that the friend becoming class must be first declared
or defined (forward declaration).
*/
#include <iostream>
using namespace std;

class myClass1 {
    friend class myClass2; // myClass2 is a friend of myClass1
private:
    int x;

public:
    myClass1(int a)
    {
        x = a;
    }
};
class myClass2 {

public:
    void showData(myClass1 obj)
    {
        cout << "x value is: " << obj.x;
    }

};

int main()
{
    myClass1 obj1(5);
    myClass2 obj2;
    obj2.showData(obj1);

    return 0;
}


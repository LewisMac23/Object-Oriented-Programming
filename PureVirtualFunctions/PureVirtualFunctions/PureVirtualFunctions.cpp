// PureVirtualFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void getArea() = 0; // pure virtual function
}

class Circle :public Shape {
public:
    void getArea()
    {
        cout << "Enter circle redius" << endl;
        int r;
        cin >> r;
        cout << "Area of circle is:" << (3.14 * r * r);
    }
};

class Rectangle : public Shape {
public:
    void getArea()
    {
        cout << "Enter length and breadth to calculate area of rectangle" << endl;
        int l, b;
        cin >> l;
        cin >> b;
        cout << "Area of rectangke is:" << (l * b);
    }
};
int main()
{
    Circle c1;
    c1.getArea();
    Rectangle r1;
    r1.getArea();

    return 0;
}


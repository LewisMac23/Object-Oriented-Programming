// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Inheritance

/*
-Inheritance allows us to define a class in terms of (from another) another class.
-Provides REUSABILITY and MAINTAINABILITY of CODE.
-The idea of inheritance implements the IS-A relationship. For example, mammal IS-A animal, dog IS-A mammal
hence dog IS-A animal as well and so on.
-The class from which the new class inherits properties (data members and member functions) is called BASE CLASS
and the new created class is called DERIVED CLASS.
-Syntax - class derived-class: access-specifier base-class
{
	data members and member functions of derived class
}
*/

#include <iostream>
using namespace std;

//Base class
class Shape {
protected:
	int width;
	int height;
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
};

// Derived Class
class Rectangle : public Shape {

public:
	int getArea() {
		return (width * height);
	}
};

int main(void){
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);

	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;
	
	return 0;
}

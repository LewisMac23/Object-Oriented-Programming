// AccessSpecifiersInInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class myBaseClass {

public:
	int x;
	myBaseClass()
	{
		x = 5;
		y = 5;
		z = 5;
	}
	void printProtectedData()
	{
		cout << "y:" << y << endl;
	}
protected:
	int y;
private:
	int z;
};

class myDerivedClass : public myBaseClass {
	/*
	private int x
	private int y
	*/
};

class myDerivedClass3 : public myDerivedClass {

};

void myOutsideFunction(myBaseClass obj)
{
	//cout << "x:" << obj.x << endl;
	//obj.printProtectedData();
	//cout << "z:" << obj.z << endl;
}

int main(){

	myBaseClass obj1;
	myDerivedClass obj2;
	cout << "x:" << obj2.x;
	//myOutsideFunction(obj1);
	
	return 0;
}


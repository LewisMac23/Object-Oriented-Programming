// ObjectOrientedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Object oriented Programmin
/*
-Emphasis on data rather than the procedure
-Programs are divided in to Objects.
-Data structures are designed such thta they characterize the objects.
-Functions that operate on the data of an object are tied together in that same data stucture.
-Data is hidden and cannot be directly accessed.
*/
/*
Definition - OOP is an approach that provides a way of modularizing programs by creating partitioned memory area for 
both data and functions that can be used as a template(Class) for creating copies of such modules on demand (Objects)

Some basic concepts associated with OOP:
1-Classes & Objects
2-Data Abstraction and Encapsulation
3-Inheritance
4-Polymorphism
5-Dynamic Binding
6-Message Passing
*/

//Classes and Objects

#include <iostream>
#include <string>	//Include this for using string class
using namespace std;

class Cars {

	private:
	//char company_name[50]; can use string instead of this
	//member variables or data member
	string company_name;
	string model_name;
	string fuel_type;
	float mileage;
	double price;

	public:
		// member functions
		void setData(string cname, string mname, string ftype, float m, double p) {
			company_name = cname;
			model_name = mname;
			fuel_type = ftype;
			mileage = m;
			price = p;
		}
		void displayData()
		{
			cout << "Car Properties" << endl << endl;
			cout << "Car Company Name - " << company_name << endl;
			cout << "Car Company Model - " << model_name << endl;
			cout << "Car Fuel Type - " << fuel_type << endl;
			cout << "Car Mileage - " << mileage << endl;
			cout << "Car Price - " << price << endl;
		}
};


int main()
{
	Cars car1; // objects are nothing but variables of type class
	
	car1.setData("toyota", "alitis", "petrol", 15.5, 150000);
	car1.displayData();

	return 0;
}


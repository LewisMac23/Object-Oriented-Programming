// Constructors+Destructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
What is a Constructor?
-A constructor is a member function of a class which initializes objects of a class. In C++, a constructor is automatically
called when object(instance of a class) is created. It is a special member function of the class.
How constructors are different from a normal member function
A constructor is different from normal functions in following ways.
-Constructor has same name as the class itself
-Constructors don't have return type
-A constructor is automatically called when an object is created.
-If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an 
empty body).
*/
/*
Types of Constructors
1.Default Constructors: Default constructor is the constructor which doesn't take any argument. It has no parameters.
2.Parameter Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object
when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When
you define the constructor's body, use the parameters to initialize the object.
3.Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class.
*/

/*
What is a Destructor
-A Destructor is a member function which destructs or deletes an object
WHne is destructor called?
-The function ends.
-The program ends.
-A block containing local variables ends.
-A delete operator is called.
How destructors are different from a normal member function.
-Destructors have same name as the class preceded by a tilde (~).
-Destructors don't take any argument and don't return anything (not even void).
*/
/*
Can there be more than one destructor in a class?
-No, there can only be one destructor in a class with classname preceeded by ~, no parameters and no return type.
WHen do we need to write a user-defined destructor.
-If we do not write out own destructor in clas, compiler creates a default destructor for us. The default destructor works fine unless
we have dynamically allocated memory or pointer in class. When a class contains a pointer to memory allocated in class, we should write a destructor
to release memory before the class instance is destroyed. This must be done to avoid memory leak.
*/
#include <iostream>
#include <string>
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

	// default constructor
	Cars() {
		cout << "Default constructor called" << endl;
	}

	// paremeterized constructor
	Cars(string cname,string mname, string ftype, float m, double p)
	{
		cout << "Paremeterized constructor called" << endl;
		company_name = cname;
		model_name = mname;
		fuel_type = ftype;
		mileage = m;
		price = p;
	}
	// Copy constuctor
	Cars(Cars& obj)
	{
		cout << "Copy constructor called" << endl;
		company_name = obj.company_name;
		model_name = obj.model_name;
		fuel_type = obj.fuel_type;
		mileage = obj.mileage;
		price = obj.price;
	}

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

	// destructor
	~Cars()
	{
		cout << "Destructor called" << endl;

	}
};


int main()
{
	Cars car1, car2("Toyota","fortuner", "diesel", 10, 35000); // objects are nothing but variables of type class
	car1.setData("toyota", "alitis", "petrol", 15.5, 150000);
	car1.displayData();
	car2.displayData();
	Cars car3 = car1; // copy constructor called
	car3.displayData();

	return 0;
}



// FriendFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Friend Function

/*
What is a Friend Function?
-A friend function of a class is defined outside that class scope but it has the right to access all private and
protected members of the class.
-Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
Why do we need Friend Function?
-Special case when class' private data needs to be accessed directly without using object of that class.
-Operator overloading
*/

#include <iostream>
using namespace std;

class Distance {

	private:
		int meters;
	public:
		Distance()
		{
			meters = 0;
		}
		void DisplayData()
		{
			cout << "Meters value: " << meters;
		}
		// prototype or signature
		friend void addValue(Distance &d);  //call by reference
};

void addValue(Distance &d)
{
	d.meters = d.meters + 5;
}


int main()
{
	Distance d1; // meters =0
	d1.DisplayData(); // 0

	// the friend function call
	addValue(d1); // pass by reference
	cout << endl << endl;

	d1.DisplayData();  // 5

	return 0;

	return 0;
}


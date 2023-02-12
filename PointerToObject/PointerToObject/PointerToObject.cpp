// PointerToObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Pointer to Object and passing object as argument and returning object

	//ComplexNUmber
	//real part
	//imaginary part

	//comp1 - 5 + 61 //
	//comp2 - 3 _ 4i //

	//comp3 = (5+3)+(6+4)i


#include <iostream>
using namespace std;

/*
Key Concepts
1.Passing Objects as arguments in functions.
2.Returning Objects from functions.
3.Pointer to Objects.
*/


	class ComplexNumber {

	private:
		// data members
		int real;
		float imaginary;
	public:
		ComplexNumber() {

		}
		ComplexNumber(int r, float i)
		{
			real = r;
			imaginary = i;
		}
		void displayData()
		{
			cout << "Complex number is: " << real << "+" << imaginary << "i" << endl << endl;
		}
		int getRealPart()
		{
			return real;
		}
		float getImaginaryPart()
		{
			return imaginary;
		}
};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2)
{
	int r;
	float i;
	r = n1.getRealPart() + n2.getRealPart();
	i = n1.getImaginaryPart() + n2.getImaginaryPart();
	ComplexNumber temp(r, i);
	return temp;
}


int main()
{
	ComplexNumber comp1(5, 4), comp2(2, 3), comp3;
	comp1.displayData();	// 5 + 4i
	comp2.displayData();	// 2 + 3i

	cout << "Addition of comp1 and comp2" << endl;
	comp3 = add2number(comp1, comp2);
	comp3.displayData();

	cout << "pointer to object" << endl << endl;
	ComplexNumber* ptr1;
	ptr1 = &comp3;
	ptr1->displayData();

	ptr1 = &comp2;
	ptr1->displayData();

	cout << ptr1;	//what does PTR have
	return 0;
}

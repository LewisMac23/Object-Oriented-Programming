// FunctionTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Templates in C++
-Templates are a simple and yet very powerful tool in C++
-Templates are the foundation of generic programming, which inbolves writing code in a way that is independent of any particular type.
-A template is a blueprint or formula for creating a generic class or a function.
-2 Types
	-Function Template
	-Class Template
*/
/*
Function Templates in C++
-Function templates are special functions that can operate with generic types.
-This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
-The simple idea is to pass data type as a parameter so that we don't need to write same code for different data types.
-We write a generic function that can be used for different data types.
*/

#include <iostream>
using namespace std;


template<typename T, typename U>
U add(T x, U y)
{
	return(x + y);
}

int main()
{
	cout << "Addition of 2 variables 3 and 4 is:" << add<int,double>(3, 4.5)<<endl;
	cout << "Addition of 2 float variables 3.4 and 4.2 is:" << add<float>(3.4f, 4.2f)<<endl;
	cout << "Addition of 2 double variables 3.45 and 4.23 is:" << add<double>(3.45, 4.23)<<endl;

	return 0;
	
}


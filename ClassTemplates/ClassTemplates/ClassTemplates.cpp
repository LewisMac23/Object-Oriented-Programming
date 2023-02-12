// ClassTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Class Templates in C++
-Sometimes, you need a class implementation that is same for all classes, only the data types used are different.
-Normally, you would need to create a different class for each data type OR create different member variables and functions within a single class.
-In Class Templates we write a CLASS that can be used for different data types.
*/

#include <iostream>
using namespace std;

template <typename T, typename U>
class Weight {
private:
    T kg;
    U grams;
    int a;
    double y;
public:
    void setData(T x, U y)
    {
        kg = x;
        grams = y;
    }
    T getKgData()
    {
        return kg;
    }
    U getGramData()
    {
        return grams;
    }
};

int main()
{
    Weight <int,double>obj1;
    obj1.setData(5,0.53);
    cout << "Value of KG is: " << obj1.getKgData() << endl;
    cout << "Value of gram is: " << obj1.getGramData() << endl;


    return 0;
}


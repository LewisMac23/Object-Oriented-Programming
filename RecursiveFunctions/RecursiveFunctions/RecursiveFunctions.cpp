// RecursiveFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Recursive Functions in C++
-A function that calls itself is known as a recursive function. And, this technique is known as recursion. Recursion is the process of repeating items in a 
self-similar way.
-This enables the function to repeat itself several times, outputting the result and the end of each iteration.
-The recursion continues until some condition is met to prevent it.
-To prevent infinite recursion, if...else statement (or similar approach) can be used where one branch makes the recursive call and other dosen't.
*/
/*
Advantages and Disadvantages
-Recursion makes program elegant and cleaner. Most of the algorithms can be defined recursively which makes it easier to visualize and prove.
-If the speed of the program is vital then, you should avoid using recursion. Recursions use more memory and are generally slow. Instead, you can use loops.
-For the most part recursion is slower, and takes up more of the stack as well. The main advantage of recursion is that for problems like tree traversal it
makes the algorithm a little easier or more "elegant".
*/

#include <iostream>
using namespace std;

int sum(int num)
{
    if (num != 0)
        return(num + sum(num - 1)); // sum() function calls itself
    else
        return num;
}

int main()
{
    int n;
    cout << "Enter number until which you want the sum of natural numbers to be calculated: ";
    cin >> n;
    int total = sum(n);
    cout << endl << "Sum of natural number from 1 to" << n << "are: " << total << endl;

    return 0;
}


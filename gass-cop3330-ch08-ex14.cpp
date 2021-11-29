/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

//ANSWER:
//A const variable is a variable that cannot be changed once its defined
//by passing a variable as a constant into a function you can be assured that the data of that variable will not be changed
//There are not many uses with something as simple as an int variable being passed into a function.
//But with larger data types like custom classes passing a const can help protect the data from being changed or corrupted.
//So yes you can pass a function arguement as a const, and there are a few uses for it.

#include "std_lib_facilities.h"

int constTest(const int a, const int b)
{
    //a = a+b 
    //the line above cannot work due to the nature of const variables
    //to get the desired result with const variables we simply have to return
    return a+b+b;
}

int regularTest(int a, int b)
{

        a = a+b;
    return a+b;
}

int main()
{
    int a = 5;
    int b = 4;
    cout << "Regular int test : ";
    cout << regularTest(a,b);
    cout << "\nConst int test : ";
    cout << constTest(a,b);

    return 0;
}
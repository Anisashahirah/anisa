// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

double y = 1, x = 2, a = 3, b = 4, c = 5, z = 6;

int main()
{
	y = x + 9;
	cout << y<< endl;
	a = (2 * b) + (2 * c);
	cout << a<<endl;
	y =( x * x * x);
	cout << y;
	y = pow(x, 3);
	cout << y << endl;

	y = (x / (z*z)) + 2;
	cout << y << endl;
	y = (x / pow(z, 2)) + 2;
	cout << y << endl;
	y = pow(x,2) / pow(y,2);
	cout << y << endl;
    return 0;
}


// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
float price = 9.90;
int quantity = 0;
const int DISC = 10;
float totalprice = 0.0;
int input()
{
	
	//user enter value

	cout << "enter quantity ";
	cin >> quantity;
	
	return 0;
}

void star()
{
	cout << "this is lab 4\n";
	cout << "Anisa Shahirah , Do Exercise\n";
}

int calculate()
{
	totalprice=(price*quantity)*(100-DISC)/100.00;
	return 0;
}
int main()
{
	input();
	star();
	calculate();
	cout << "total price = " << totalprice <<"\n";
    return 0;
}


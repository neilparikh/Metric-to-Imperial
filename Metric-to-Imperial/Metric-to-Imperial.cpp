// Metric-to-Imperial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
int operation;
double value;
double answer;
cout<<"Choose an operation" <<endl << "1 - Pounds to Kilograms" <<endl << "2 - Kilograms to pounds" <<endl;
cin>> operation;
	if (operation == 1) {
		cout<<"Enter the amount of pounds" <<endl;
		cin>> value;
		answer = value * 0.45359237;
		cout<< value;
		cout<< " pounds is equal to ";
		cout<< answer;
		cout<< " kilograms.";
	}

	if (operation == 2) {
		cout<<"Enter the amount of kilograms" <<endl;
		cin>> value;
		answer = value * 2.20462262;
		cout<< value;
		cout<< " kilograms is equal to ";
		cout<< answer;
		cout<< " pounds.";
	}
cin.ignore();
cin.get();
}


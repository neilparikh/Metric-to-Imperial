// Metric-to-Imperial.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main() {
	int operation;
	double value;
	double answer;
	cout <<"Choose an operation\n 1 - Pounds to Kilograms\n 2 - Kilograms to pounds\n";
	cin >> operation;
	if (operation == 1) {
		cout <<"Enter the amount of pounds\n";
		cin >> value;
		answer = value * 0.45359237;
		cout << value << " pounds is equal to " << answer << " kilograms.";
	}

	if (operation == 2) {
		cout <<"Enter the amount of kilograms\n";
		cin >> value;
		answer = value * 2.20462262;
		cout << value << " kilograms is equal to " << answer << " pounds.";
	}
}


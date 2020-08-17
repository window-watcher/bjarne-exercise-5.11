#include <iostream>
#include <string>
#include <vector>
#include <cmath>
/*
	Project: Exercise 5.11
	By: Adrian Rodriguez
	Date: 8/17/20
	Objective: Discover what is the biggest fibonacci number that can be held with a int variable.
	Version 1.1

	Change log
	version 1.1 : Fixed formatting of console output

*/
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int fibonacci_max() {
	
	int first_value = 1, second_value = 1, fibonicci = 0;

	while (first_value + second_value > 0) {//ends loop as soon a overflow is detected. Over flow will result in negative integer
		
		cout << first_value << " " << second_value; //print out 1st and 2nd values
			fibonicci = second_value + first_value;

		cout << " " << fibonicci << endl; // print out fibonicci only after value calulation
			
		first_value = second_value;
		second_value = fibonicci;
	}

	return fibonicci;
}

int main() //C++ programs start by executing the function main
{
	cout << "The max fibonacci number that can be held by int is " << fibonacci_max() << endl;
	keep_window_open();//wait for a character to be enter
	return 0;
}
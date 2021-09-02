/*
	Author: Zhipeng Lin 
	Course: CSCI13500
	Instructor: Mike Zamansky
	Assignment: Lab 1B
	
	Program Description: 
	The user will be asked to input three integers. The smaller of the
	three integers will be printed to the terminal.
*/

#include <iostream>
using namespace std;

int main() {
	cout << "You will provide three integers and will receive the smaller of the two numbers " << endl;
	
	cout << "Enter the first integer: ";
	int firstInteger = 0;
	cin >> firstInteger;
	
	cout << "Enter the second integer: ";
	int secondInteger = 0;
	cin >> secondInteger;
	
	cout << "Enter the third integer: ";
	int thirdInteger = 0;
	cin >> thirdInteger;
	cout << endl;
	
	int smallestInteger = 0;
	if (firstInteger <= secondInteger){
		if (firstInteger < thirdInteger){
			smallestInteger = firstInteger;
		}
		else{
			smallestInteger = thirdInteger;
		}
	}
	else if (secondInteger <= thirdInteger){
		if (secondInteger < firstInteger){
			smallestInteger = secondInteger;
		}
		else{
			smallestInteger = firstInteger;
		}
	}
	else{
		smallestInteger = thirdInteger;
	}
	
	
	cout << "The smallest of the three integers is " << smallestInteger << "." << endl;
}

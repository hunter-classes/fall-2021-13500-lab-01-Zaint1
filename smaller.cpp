/*
	Author: Zhipeng Lin 
	Course: CSCI13500
	Instructor: Mike Zamansky
	Assignment: Lab 1A
	
	Program Description: 
	The user will be asked to input two integers. The smaller of the
	two integers will be printed to the terminal.
*/

#include <iostream>
using namespace std;

int main() {
	cout << "You will provide two integers and will receive the smaller of the two numbers " << endl;
	
	cout << "Enter the first integer: ";
	int firstInteger = 0;
	cin >> firstInteger;
	
	cout << "Enter the second integer: ";
	int secondInteger = 0;
	cin >> secondInteger;
	cout << endl;
	
	int smallerInteger = 0;
	if (firstInteger < secondInteger){
		smallerInteger = firstInteger;
	}
	else{
		smallerInteger = secondInteger;
	}
	
	cout << "The smaller of the two integers is " << smallerInteger << "." << endl;
}

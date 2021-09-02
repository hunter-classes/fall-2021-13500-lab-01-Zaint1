/*
	Author: Zhipeng Lin 
	Course: CSCI13500
	Instructor: Mike Zamansky
	Assignment: Lab 1C
	
	Program Description: 
	The user will be asked to input a year. The program will print
	a message of whether or not the input year is a leap year.
	
	If it is a leap year, the program will print "Leap year",
	otherwise print "Common year".
*/

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a year to determine if it is a leap year or a common year: ";
	int inputYear = 0;
	cin >> inputYear;
	
	string outputMsg = "";
	if (inputYear % 4){
		outputMsg = "Common year";
	}
	else if (inputYear % 100){
		outputMsg = "Leap year";
	}	
	else if (inputYear % 400){
		outputMsg = "Common year";
	}
	else{
		outputMsg = "Leap year";
	}
	
	cout << "The year " << inputYear << " is a " << outputMsg << "." << endl;
}

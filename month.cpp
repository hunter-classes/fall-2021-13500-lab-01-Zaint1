/*
	Author: Zhipeng Lin 
	Course: CSCI13500
	Instructor: Mike Zamansky
	Assignment: Lab 1D
	
	Program Description: 
	The user will be asked to input a year and a month. The program will print
	the number of days in that month of the year inputted, taking account
	into leap years as well.
*/

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a year: ";
	int inputYear = 0;
	cin >> inputYear;
	
	cout << "Enter a month: ";
	int month = 0;
	cin >> month;
	cout << endl;
	
	bool isLeapYear = false;
	if (inputYear % 4 == 0){
		if (inputYear % 100 == 0){
			if (inputYear % 400 == 0){
				isLeapYear = true;
			}
		}
		else{
			isLeapYear = true;
		}
	}
	
	int daysInCurrentMonth = 0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		daysInCurrentMonth = 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11){
		daysInCurrentMonth = 30;
	}
	else{
		if (isLeapYear){
			daysInCurrentMonth = 29;
		}
		else{
			daysInCurrentMonth = 28;
		}
	}
	
	cout << "Year: " << inputYear << endl;
	cout << "Days in Month " << month << ": " << daysInCurrentMonth << endl;
}

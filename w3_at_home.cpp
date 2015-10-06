// OOP244 Workshop 3: Dynamic Memory
// File	w3_in_lab.cpp
// Version 1.0
// Date	2015/05/30
// Author	A.C. Coder
// Description
// This file is used to demonstrate dynamic memory in 
// C++ and to process an array of objects of compound 
// type where the user specifies the number of 
// elements in the array at run-time.
/////////////////////////////////////////////////////

#include <iostream>
#include "Weather.h"
using namespace std;
using namespace sict;


double findLow(const char* qDate, Weather *wData, int n) {
	
	return n;
}
int main() {
	int n; //the count of days worth of weather
		   // initialize the weather pointer here
	int* p = &n;

	

	cout << "Weather Data\n";
	cout << "=====================" << endl;
	cout << "Days of Weather: ";
	cin >> n;
	cin.ignore();
	Weather* weather;
	weather = new Weather[n];

	for (int i = 0; i < n; i++) {
		char date_description[7];
		double high = 0.0, low = 0.0;
		cout << "Enter Date :";

		cin.getline(date_description, 80, '\n');
		cout << "Enter High :";
		cin >> high;
		cout << "Enter Low :";
		cin >> low;
		cin.ignore();
		weather[i].set(date_description, low, high);

	}
	cout << endl;
	cout << "Weather report:\n";
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		weather[i].display();
	}
	char findDate[7];
	cout << "Enter the date you are looking for: ";
	cin >> findDate;

	double low = findLow(findDate, weather, n);
	cout << "Low temperature : "<< low << endl;

	
	delete[] weather;


	return 0;

}
/*
Output Example :
Weather Data
== == == == == == == == == == =
Days of Weather : 3
Enter date : Oct / 1
Enter high : 15
Enter low : 10
Enter date : Nov / 13
Enter high : 10
Enter low : 1.1
Enter date : Dec / 15
Enter high : 5.5
Enter low : -6.5

Weather report :
== == == == == == == == == == ==
Oct / 1_______15.0__10.0
Nov / 13______10.0___1.1
Dec / 15_______5.5__ - 6.5
*/
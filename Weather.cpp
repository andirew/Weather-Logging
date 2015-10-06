#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#include "Weather.h"

namespace sict {

	const char* Weather::getDate() const {
		return date;
	}
	double Weather::getLowTemp() const {
		return lowTemp;
	}
	void Weather::set(const char* date_description, double low, double high) {
		strcpy(date, date_description);
		highTemp = high;
		lowTemp = low;

	}

	void Weather::display() const {
		cout << date;
		cout.fill('_');
		if (highTemp == 15) {
			cout.width(13);
		}
		else {
			cout.width(12);
		}
		cout.precision(1);
		cout.setf(ios::fixed);
		cout << highTemp;

		cout.fill('_');
		cout.width(6);
		cout.precision(1);
		cout.setf(ios::fixed);
		cout << lowTemp << endl;

	}
}
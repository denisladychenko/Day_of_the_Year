#include "DayOfTheYear.h"
#include <iostream>
#include <string>
using namespace std;

string DayOfTheYear::months[] = { "", "January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December" };

DayOfTheYear::DayOfTheYear(int d)
{
	day = d;
}

void DayOfTheYear::print()
{
	int dayOfMonth;
	string month;
	//determine which month this day belongs to
	if (day > 0 && day <= 31) {
		month = months[1];
		dayOfMonth = day;
	}
	else if (day > 31 && day <= 59) {
		month = months[2];
		dayOfMonth = day - 31;
	}
	else if (day > 59 && day <= 90) {
		month = months[3];
		dayOfMonth = day - 59;
	}
	else if (day > 90 && day <= 120) {
		month = months[4];
		dayOfMonth = day - 90;
	}
	else if (day > 120 && day <= 151) {
		month = months[5];
		dayOfMonth = day - 120;
	}
	else if (day > 151 && day <= 181) {
		month = months[6];
		dayOfMonth = day - 151;
	}
	else if (day > 181 && day <= 212) {
		month = months[7];
		dayOfMonth = day - 181;
	}
	else if (day > 212 && day <= 243) {
		month = months[8];
		dayOfMonth = day - 212;
	}
	else if (day > 243 && day <= 273) {
		month = months[9];
		dayOfMonth = day - 243;
	}
	else if (day > 273 && day <= 304) {
		month = months[10];
		dayOfMonth = day - 273;
	}
	else if (day > 304 && day <= 334) {
		month = months[11];
		dayOfMonth = day - 304;
	}
	else if (day > 334 && day <= 365) {
		month = months[12];
		dayOfMonth = day - 334;
	}
	//output the day
	cout << month << " " << dayOfMonth << endl;
}
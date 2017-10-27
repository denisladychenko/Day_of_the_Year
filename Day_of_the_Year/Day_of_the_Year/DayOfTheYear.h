#ifndef DAYOFTHEYEAR_H
#define DAYOFTHEYEAR_H

#include <iostream>
using namespace std;

class DayOfTheYear {

public:
	DayOfTheYear() { day = 1; }
	DayOfTheYear(int d);

	void print();
private:
	int day;
	static string months[];

};


#endif 


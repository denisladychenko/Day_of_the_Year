#include "DayOfTheYear.h"
#include <iostream>
using namespace std;


int main()
{
	int dayOfTheYear;
	

	cout << "Enter the day in the range 1 - 365 :";
	cin >> dayOfTheYear;

	while (dayOfTheYear < 1 || dayOfTheYear > 365)
	{
		cout << "The day must be in range 1 - 365!\n";
		cout << "Enter the day of the year: ";
		cin >> dayOfTheYear;
	}
	DayOfTheYear theDay(dayOfTheYear);
	cout << "The day " << dayOfTheYear << " is the ";
	theDay.print();


	cout << endl << endl;
	system("pause");
    return 0;
}


// Michael Napoli
// August 17 2022 ©
// Program CPP11 for Chapter 3
// Referrence: ch1 document, ch2 ppt, ch3 ppt

#include <iostream>
using namespace std;

int main()
{
	// define variables
	int populationUS;
	float avgIncome;
	float avgWage;
	int totalAttendance;
	float totalGNP;
	char gender;

	// prompt user to enter data for variables
	cout << "Please DO NOT TYPE COMMAS WHEN ENTERING DATA :)" << '\n';
	cout << "Enter the population of the US: ";
	cin >> populationUS;

	cout << "Enter the US average family income, do not include '$': ";
	cin >> avgIncome;

	cout << "Enter the hourly wage for a family member, do not include '$': ";
	cin >> avgWage;

	cout << "Enter the number of students attending SPC: ";
	cin >> totalAttendance;

	cout << "Enter the total GNP of Florida, do not include '$': ";
	cin >> totalGNP;

	cout << "Enter gender as a single character, ex: 'M': ";
	cin >> gender;

	// output the data to the screen
	cout << "The US population is: " << populationUS << endl;
	cout << "The US average family income is: $" << avgIncome << endl;
	cout << "The US average hourly wage is : $" << avgWage << endl;
	cout << "The number of students attending SPC is: " << totalAttendance << endl;
	cout << "The total GNP of Florida is: $" << totalGNP << endl;
	cout << "The user entered " << gender << " as the gender." << endl;

	// beep 5 times with escape sequence
	cout << "\a\a\a\a\a";
	
	system("pause");
	return 0;
}
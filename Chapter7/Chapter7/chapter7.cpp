//-------------------------------------------------------------//

// Michael Napoli     COP2220      September 15 2022           //

//-------------------------------------------------------------//

// C++ Program Arrays Chapter 7                                //

//-------------------------------------------------------------//

// in collaboration with: provided examples from MyCourses     //

//-------------------------------------------------------------//


#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	// initializing Arrays, step1
	double dArr[5];
	long lArr[7] = { 100000, 134567, 123456, 9, -234567, -1, 123489 };
	int iArr[3][5];
	char sName[31] = "michael napoli";

	// initializing variables, step2
	short cnt1;
	short cnt2;
	long double total = 0;

	// initializing variable, step3
	long highest;

	// I created custom variables for array length
	int dArrLength = sizeof(dArr) / sizeof(double);
	int lArrLength = sizeof(lArr) / sizeof(long);
	int sNameLength = sizeof(sName) / sizeof(char);

	cout << "=========================================" << endl;
	
	// for loop for populating dArr, step4
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{	
		int randInt = rand();
		dArr[cnt1] = randInt;
		cout << setw(10) << dArr[cnt1];
	}
	cout << endl;

	cout << "=========================================" << endl;

	// for loop for obtaining total of dArr, step5
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{
		total = total + dArr[cnt1];
	}
	
	// output for total and average of dArr, step6
	cout << "The total for dArr is: " << total << endl;
	cout << "The average for dArr is: " << total / dArrLength << endl;

	cout << "=========================================" << endl;
 
	// for loop for processing lArr, step7
	for (cnt1 = 1, highest = lArr[0]; cnt1 < lArrLength; cnt1++)
	{
		if (lArr[cnt1] > highest)
			highest = lArr[cnt1];
	}
	
	// output for highest in lArr, step8
	cout << "the highest is: " << highest << endl;

	cout << "=========================================" << endl;

	// for loop to populate iArr, step9
	for (cnt1 = 0; cnt1 < 3; cnt1++)
	{	
		for (cnt2 = 0; cnt2 < 5; cnt2++)
		{
			int randInt = rand() % (53 - 1 + 1) + 1;
			iArr[cnt1][cnt2] = randInt;
		}
	}

	// for loop to output iArr in 3 rows, step10
	cout << "iArr, 3 rows, 5 columns" << endl;
	for (cnt1 = 0; cnt1 < 3; cnt1++)
	{
		for (cnt2 = 0; cnt2 < 5; cnt2++)
		{
			cout << setw(6) << iArr[cnt1][cnt2] << "\t";
		}
		cout << endl;
	}
	cout << "==========================================" << endl;

	// for loop to output iArr in 3 columns and 5 rows, step11
	cout << "iArr. 5 rows, 3 columns" << endl;
	for (cnt1 = 0; cnt1 < 5; cnt1++)
	{
		for (cnt2 = 0; cnt2 < 3; cnt2++)
		{
			cout << setw(6) << iArr[cnt2][cnt1] << "\t";
		}
		cout << endl;
	}

	cout << "==========================================" << endl;
	
	// get user input to add another name in sName, step12
	cout << "Please enter a new name: ";
	cin.getline(sName, 31);
	
	// print ascii value of each char in sName, step13
	cnt1 = 0;
	while (sName[cnt1] != '\0')
	{
		cout << int(sName[cnt1]) << endl;
		cnt1++;
	}

	cout << "==========================================" << endl;

	// make sName have the name 'Albert Einstein', step14
	strcpy_s(sName, "Albert Einstein");
	cout << "name changed to " << sName << endl;

	cout << "==========================================" << endl;

	// print ascii value for 12th character in sName, step15
	cout << "ascii value for char 12 in sName is: " << int(sName[11]) << endl;

	return 0;
}
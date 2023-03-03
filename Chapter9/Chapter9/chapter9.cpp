//---------------------------------------------------------//
// Michael Napoli      COP2220
//---------------------------------------------------------//
// Chapter 9 program
//---------------------------------------------------------//
// In collaboration with: starting out with C++ By tony Gaddis
//---------------------------------------------------------//


#include <string>
#include <iomanip>
#include <iostream>
#include <memory>

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


	cout << "==========================================" << endl;
	cout << "==========================================" << endl;
	// BEGINNING CH9, continuation of CH7

	// define a pointer to a double, pdArray. step16
	double *pdArray;

	// assign the pointer pdArray to contain the address of the double array, dArr: step17
	pdArray = dArr;

	/* Use the array name, dArr, to print out the array elements with subscript notation,
	[ ]. All on 1 line a space between each. step18 */
	cout << "step18" << endl;
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{
		cout << pdArray[cnt1] << " ";
	}
	cout << endl;
	cout << "==========================================" << endl;
	
	/* Use the pointer to print out the array elements with pointer notation while not
	changing the pointer itself. Use a for loop. *( pdArray + Cnt1) would be an example.
	All on 1 line a space between each. step19 */
	cout << "step19" << endl;
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{
		cout << *(pdArray + cnt1) << " ";
	}
	cout << endl;
	cout << "==========================================" << endl;
	
	/* Use the pointer to print out the array elements with pointer notation but change
	the pointer to point to the actual array element rather than the method in 18.
	All on 1 line. step20 */
	cout << "step20" << endl;
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{
		pdArray[cnt1] = *(dArr + cnt1);
		cout << *(dArr + cnt1) << " ";
	}
	cout << endl;
	cout << "==========================================" << endl;


	/* Use the array name for the double array and pointer notation to print the entire
	array, all on one line. step21 */
	cout << "step21" << endl;
	for (cnt1 = 0; cnt1 < dArrLength; cnt1++)
	{
		dArr[cnt1] = *(dArr + cnt1);
		cout << dArr[cnt1] << " ";
	}
	cout << endl;
	cout << "==========================================" << endl;



	/* Using a different pointer, piArray, allocate enough memory for 100 int's and
	assign the address to the pointer. step22 */
	int *piArray;
	int size = 100;
	piArray = (int*) malloc (sizeof(int) *size);

	/* In a for loop assign every item in the array to be a random number from 1 to 49. step23 */
	srand((unsigned)time(NULL));
	for (cnt1 = 0; cnt1 < size; cnt1++)
	{
		int randNum = rand() % 49 + 1;
		piArray[cnt1] = randNum;
	}


	/* Using cout print the first 10 items in the array, all on 1 line. step24 */
	cout << "step24" << endl;
	for (cnt1 = 0; cnt1 < 10; cnt1++)
	{
		cout << piArray[cnt1] << " ";
	}
	cout << endl;
	cout << "==========================================" << endl;

	return 0;
}
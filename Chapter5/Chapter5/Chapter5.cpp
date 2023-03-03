//=======================================================//

// Michael Napoli

//=======================================================//

// In collaboration with notes from "Starting out with C++ ninth edition"

//=======================================================//

// for Chapter 5 COP2220

//=======================================================//

// August 31 2022 

//=======================================================//

/* 1. Variable Definitions only as (DieRoll, Guess, cnt1, cnt2) followed by this statement:

srand((unsigned int)time (NULL));

which will give the random number generator a random starting point.

Note: srand and rand require the TIME.H (or iomanip)

cnt1 and cnt2 will be used in Chapter 5 drop box as counters for loops. Do NOT create additional variables.
Points will be taken off for any additional variable creation.

2. Prompt the user for a whole number between 1 and 6.

3. Accept user input of the number use Guess as the variable

4.  Simulate rolling a die with the following code (DieRoll variable is defined in 1):

DieRoll = rand()%6+1;    //Note: rand is a function returning 0 thru 32767.

5. Display Guess and DieRoll on the Screen with good user labeling information.
Additionally, display WINNER if Guess and DieRoll are equal.

6. Display DOUBLE WINNER if DieRoll is an odd number (use modulo). Not related to question 5 above. NOT an if else...

7. If the DieRoll added to the Guess is greater than or equal to 10 and DieRoll is even Display �YOU ARE A LUCKY PERSON�.
This is unrelated to the previous requirements. NOT an if else...Make this a complex if test. NOT nested if statements.

cnt1 and cnt2 should be used for the loop control variables.

8.  Create a for loop to print the numbers 1 thru 5, all on the same line.

9.  On the next output line create a for loop which will count backwards by 1’s from 100 to 0 (inclusive of 100 and 0) 
only displaying every number which is evenly divisible by 17.

10. Write a while loop to do the same as #9 above.

11. Write a do…while loop to:
a.  ask the user for a number   ( use the variable Guess).
b.   get user input.
c.   tell the user the remainder of dividing the number by 5 (modulo) even if result is 0.
d.   continue the loop until the user enters zero (0) as the number. (Make sure the user is aware of this.)
     Organize the loop like this (this is a planning technique called pseudocode):
		   do
		   {
				prompt the user for a # (a. above)
				get user input (b. above)
				output to user (c. above)
		    }while   (your test goes here to see if the number is 0);

12.      Create a for loop within a for loop.  The outer loop will count from 1 to 5. The inner loop will count 
from 1 to 6 and write the product of the outer loop counter multiplied by the inner loop counter, all on the same 
line with one tab (‘\t’) between. Between the loop ends put a line feed (endl or \n). The result should look like this:
1          2          3          4          5          6
2          4          6          8          10         12
3          6          9          12         15         18         etc,
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
												// define variables
	int dieRoll;
	int guess;
	int cnt1;
	int cnt2;

	srand((unsigned int)time(NULL));

												// collect user input for guess
	cout << "Enter a whole number between 1 and 6: ";
	cin >> guess;

												// roll the dice
	dieRoll = rand() % 6 + 1;

	cout << "Your guess is " << guess << endl;
	cout << "The dice rolled " << dieRoll << endl;

												// condition for WINNER
	if (guess == dieRoll)
		cout << "WINNER!" << endl;

												// conditon for DOUBLE WINNER
	if (guess == dieRoll && dieRoll % 2 == 1)
		cout << "DOUBLE WINNER!" << endl;

												// condition for LUCKY
	if (guess + dieRoll >= 10 && dieRoll % 2 == 0)
		cout << "YOU ARE A LUCKY PERSON!" << endl;

	
	cout << "--------------------------------" << endl;

	cnt1 = 1;									// initialize counter1	
												// for loop, print 1 through 5
	for (cnt1 = 1; cnt1 < 6; cnt1++)
	{
		cout << cnt1 << "\t";
	}

	cout << endl;
	cout << "--------------------------------" << endl;

	cnt2 = 100;									// initialize counter2	
												// for loop, print 100 through 0, divisible by 17
	for (cnt2 = 100; cnt2 >= 0; cnt2--)
	{
		if (cnt2%17 == 0)
			cout << cnt2 << "\t";
	}

	cout << endl;
	cout << "--------------------------------" << endl;

	cnt2 = 100;									// initialize counter2
	while (cnt2 >= 0)							// while loop, print 100 through 0, divisible by 17
	{
		if (cnt2%17 == 0)
			cout << cnt2 << "\t";
		cnt2--;
	}

	cout << endl;
	cout << "--------------------------------" << endl;

	double remainder;							// do-while loop, step 11 in instructions
	do
	{
		cout << "Enter a number or press 0 to exit: ";
		cin >> guess;

		remainder = guess % 5;

		cout << "The remainder of " << guess << " divided by 5 is " << remainder << endl;


	} while (guess != 0);

	cout << "--------------------------------" << endl;

										
	
	cnt1 = 1;									// nested for loop, step 12 in instructions
	cnt2 = 1;									// re-initialize counters.
	for (cnt1 = 1; cnt1 <= 5; cnt1++)
	{
		for (cnt2 = 1; cnt2 <= 6; cnt2++)
		{
			cout << cnt1 * cnt2 << "\t";
		}
		cout << endl;
	}

		
	
	return 0;
}

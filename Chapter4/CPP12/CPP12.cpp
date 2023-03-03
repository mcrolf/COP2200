//=======================================================//
 
// Michael Napoli

//=======================================================//

// CPP12 for Chapter 4 COP2220

//=======================================================//

// August 23 2022 ©

//=======================================================//

/* 1. Variable Definitions only as (DieRoll, Guess, cnt1, cnt2) followed by this statement:

srand((unsigned int)time (NULL));

which will give the random number generator a random starting point.

Note: srand and rand require the TIME.H (or iomanip)

cnt1 and cnt2 will be used in Chapter 5 drop box as counters for loops. Do NOT create additional variables. 
Points will be taken off for any additional variable creation.

2. Prompt the user for a whole number between 1 and 6. 

3. Accept user input of the number – use Guess as the variable

4.  Simulate rolling a die with the following code (DieRoll variable is defined in 1):

DieRoll = rand()%6+1;    //Note: rand is a function returning 0 thru 32767.

5. Display Guess and DieRoll on the Screen with good user labeling information. 
Additionally, display”WINNER” if Guess and DieRoll are equal.

6. Display “DOUBLE WINNER” if DieRoll is an odd number (use modulo). Not related to question 5 above. NOT an if else...

7. If the DieRoll added to the Guess is greater than or equal to 10 and DieRoll is even Display “YOU ARE A LUCKY PERSON”. 
This is unrelated to the previous requirements. NOT an if else...Make this a complex if test. NOT nested if statements.
*/

#include <iostream>
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

	return 0;
}

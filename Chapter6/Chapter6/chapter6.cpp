//-------------------------------------------------------------------//

// Chapter 6 Programming Challenge - Lowest Score Drop

//-------------------------------------------------------------------//

// By: Michael Napoli    COP 2220     September 13, 2022

//-------------------------------------------------------------------//

// in colaboration with: Starting out with C++ Chapter 6

//-------------------------------------------------------------------//

/* Write a program that calculates the average of a group of test scores, 
where the lowest score in the group is dropped. It should use the following functions:

• void getScore() should ask the user for a test score, store it in a 
reference parameter variable, and validate it. This function should be 
called by main once for each of the five scores to be entered.

• void calcAverage() should calculate and display the average of the 
four highest scores. This function should be called just once by main
and should be passed the five scores.

• int findLowest() should find and return the lowest of the five scores 
passed to it. It should be called by calcAverage, which uses the function 
to determine which of the five scores to drop.

Input Validation: Do not accept test scores lower than 0 or higher than 100.
*/

#include<iostream>
using namespace std;

double inputValidate(double);
void getScore(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);

/* The main initializes the score variables and calls the functions
   that will ask the user for the scores and calculate the average.*/
int main()
{
	double score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

// Input validation. ignores bad input and prompts user input.
double inputValidate(double num)
{
	while (!(cin >> num) || (num < 0 || num > 100))
	{
		cout << "------------------------------------------" << endl
			<< "*Error. An integer from 0-100 must be entered* " << endl
			<< "------------------------------------------" << endl
			<< "What is the test score: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return num;
}

// Function to get scores. calls input validation.
void getScore(double &num)
{
	cout << "What is the test score: ";
	num = inputValidate(num);
}

/*Calculating the average.displays lowest score to be droppedand the average
  after the lowest score that has been dropped*/
void calcAverage(double num1, double num2, double num3, double num4, double num5)
{
	double average;
	double lowest = findLowest(num1, num2, num3, num4, num5);

	if (num1 == lowest)
		average = (num2 + num3 + num4 + num5) / 4;
	else if (num2 == lowest)
		average = (num1 + num3 + num4 + num5) / 4;
	else if (num3 == lowest)
		average = (num1 + num2 + num4 + num5) / 4;
	else if (num4 == lowest)
		average = (num1 + num2 + num3 + num5) / 4;
	else if (num5 == lowest)
		average = (num1 + num2 + num3 + num4) / 4;

	cout << "Lowest score dropped: " << lowest << endl;
	cout << "The average test score is: " << average << endl;
}

// Function to find and return the lowest score
double findLowest(double num1, double num2, double num3, double num4, double num5)
{
	double lowScore;

	if ((num1 <= num2) && (num1 <= num3) && (num1 <= num4) && (num1 <= num5))
		lowScore = num1;
	else if ((num2 <= num1) && (num2 <= num3) && (num2 <= num4) && (num2 <= num5))
		lowScore = num2;
	else if ((num3 <= num1) && (num3 <= num2) && (num3 <= num4) && (num3 <= num5))
		lowScore = num3;
	else if ((num4 <= num1) && (num4 <= num2) && (num4 <= num3) && (num4 <= num5))
		lowScore = num4;
	else if ((num5 <= num1) && (num5 <= num2) && (num5 <= num3) && (num5 <= num4))
		lowScore = num5;
	
	return lowScore;

}

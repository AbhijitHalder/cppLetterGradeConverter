// LetterGradeConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Abhijit Halder
// 200433587

#include <iostream>
#include <limits>

using namespace std;


char getGrade(int score)
{
	// if else statements to get grades based on score
	if (score >= 88 && score <= 100)
	{
		return 'A';
	}
	else if (score >= 80 && score <= 87)
	{
		return 'B';
	}
	else if (score >= 67 && score <= 79)
	{
		return 'C';
	}
	else if (score >= 60 && score <= 66)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}

int main()
{
	int score;
	cout << "Letter Grade Converter\nBy Abhijit Halder (200433587)\n\n";

	cout << "Enter numerical grade(1-100): ";
	// check if it is a valid integer value
	if (cin >> score)
	{
		// check if it is less than 0
		if (score < 0)
		{
			cout << "Numerical grade can't be negative.\n";
		}
		// check if it is greater than 100
		else if (score > 100)
		{
			cout << "Numerical grade is too large.\n";

		}
		else
		{
			// if it is a valid integer then calculate it's grade
			cout << "Letter grade: " << getGrade(score) << "\n";
		}
	}
	else
	{
		cout << "Invalid Input!\n";
	}

	cout << "\nBye!";
	system("pause>0");
}
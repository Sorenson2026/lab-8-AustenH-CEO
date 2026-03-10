/* 
 This program will prompt the user to enter integer values in the range of 1 through 10.
 0 will exit the sequence of numbers following that will be some information including,the amount 
 of numbers input, the smallest, and the largest numbers.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Main will have the user enter values 1-10 with 0 being the sentinal value.
int main()
{
	char again;
	do
	{
		//Create variables
		int userNum = 0, userTotal = 0, numCount = 0, min = 10, max = 0;
		float average = 0;

		//Ask for input
		cout << "Welcome to my number program\n";
		cout << "\nEnter and integer (0 to quit): ";
		cin >> userNum;

		while (userNum < 0 || userNum > 10)
		{
			cout << "Enter a valid number (1-10).\n";
			cin >> userNum;
		}
		//Process loop: count, average, min, and max.
		while (userNum != 0)
		{
			userTotal += userNum; //Accumulator
			if (userNum > max)
			{
				max = userNum;
			}
			if (userNum < min)
			{
				min = userNum;
			}
			numCount++;
			cout << "Enter another integer (0 to quit): ";
			cin >> userNum;
		}

		// Output count, min, max, and average
		cout << setprecision(2) << left << fixed;
		average = userTotal / static_cast<double>(numCount); // Average counter
		cout << setw(6) << "Count" << setw(5) << "Min" << setw(5) << "Max" << setw(5) << "Average\n";
		cout << setw(6) << numCount << setw(5) << min << setw(5) << max << setw(5) << average << endl;
		cout << "Would you like to do this again? (Y/N)\n";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	return 0;
}
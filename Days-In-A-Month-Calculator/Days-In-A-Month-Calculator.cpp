// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 10/1/19

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool isRunning = true;

	const int
		JAN = 31,
		FEB = 28,
		FEB_LEAP = 29,
		MAR = 31,
		APR = 30,
		MAY = 31,
		JUN = 30,
		JUL = 31,
		AUG = 31,
		SEP = 30,
		OCT = 31,
		NOV = 30,
		DEC = 31;

	while (isRunning) {
		string userInput = "";
		bool userConfirm = false;
		string monthDisplay = "";
		int days = 0;
		int month = 0;
		int year = 0;

		while (userConfirm == false) {
			cout << "Enter the number of the month that you'd like to calculate. (1-12): ";
			cin >> userInput;
			month = stoi(userInput);

			if (month > 0 && month <= 12) {
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid month." << endl;
			}
		}

		userInput = "";
		userConfirm = false;

		while (userConfirm == false) {
			cout << "Enter a year: ";
			cin >> userInput;
			year = stoi(userInput);

			if (year >= 0 && year <= 9999) {
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid year." << endl;
			}
		}

		switch (month) {
		case 1:
			monthDisplay = "January";
			days = JAN;
			break;
		case 2:
			monthDisplay = "February";
			days = FEB;
			break;
		case 3:
			monthDisplay = "March";
			days = MAR;
			break;
		case 4:
			monthDisplay = "April";
			days = APR;
			break;
		case 5:
			monthDisplay = "May";
			days = MAY;
			break;
		case 6:
			monthDisplay = "June";
			days = JUN;
			break;
		case 7:
			monthDisplay = "July";
			days = JUL;
			break;
		case 8:
			monthDisplay = "August";
			days = AUG;
			break;
		case 9:
			monthDisplay = "September";
			days = SEP;
			break;
		case 10:
			monthDisplay = "October";
			days = OCT;
			break;
		case 11:
			monthDisplay = "November";
			days = NOV;
			break;
		case 12:
			monthDisplay = "December";
			days = DEC;
			break;
		default:
			break;
		}

		if (month == 2) {
			if (year % 100 == 0 && year % 400 == 0) {
				days = FEB_LEAP;
			}

			if (year % 100 != 0 && year % 4 == 0) {
				days = FEB_LEAP;
			}
		}

		cout << "There are " << days << " days in the month of " << monthDisplay << " in the year " << year << "." << endl;

		userConfirm = false;
		userInput = "";

		while (userConfirm == false) {
			cout << "Would you like to run the program again? (Y/N): ";
			cin >> userInput;

			if (userInput == "y" || userInput == "Y") {
				userConfirm = true;
			}
			else if (userInput == "n" || userInput == "N") {
				isRunning = false;
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid selection." << endl;
			}
		}
	}
}

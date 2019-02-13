/*
Name:			Daniel Martin
Date:			8.05.AM
Description:	lottery ticket from breakfast talk
*/

#include<iostream>
#include<random>
#include<string>
#include<cstdlib>
#include<windows.h>
#include<ctime>

using namespace std;

void display(string out) { // this is to print out stuff one letter at a time
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		cout << out.at(i);
	}
}

//constant variable
const int LISTSZ = 5;
//prototypes
void generatePick5Numbers(int list[], int length);
int seqSearch(const int list[], int listLength, int searchItem);

int main() {
	//variables
	int winningNumbers[LISTSZ];
	int playerChoice[LISTSZ];
	int numbersMatched = 0;

	generatePick5Numbers(winningNumbers, LISTSZ);

	//user interaction
	display("To play the Pick-5 game, enter five numbers between 1 and 9(inclusive): ");

	for (int i = 0; i < LISTSZ; i++) {
		cin >> playerChoice[i];
	}
	
	cout << endl;
	display("Your number matched with te Pick-5 numbers at position ");

	for (int i = 0; i < LISTSZ; i++) {
		for (int j = 0; j < LISTSZ; j++) {
			if (winningNumbers[i] == playerChoice[j]) {
				cout << (i + 1) << ", " << endl;
				numbersMatched++;
			}
		}
		
	}

	//14 seats on the plane
	
	cout << endl;
	if (numbersMatched == 5) {
		display("CONGRATULATIONS!!!! YOU WON BUBBA'S PICK-5 LOTTERY!!!!");
		cout << endl;
	}
	else {
		display("You only matched "); cout << numbersMatched; display(" numbers."); cout << endl;

		display("The winning numbers are: ");
		for (int i = 0; i < LISTSZ; i++) {
			cout << winningNumbers[i] << ", ";
		}
		cout << endl;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}

//function
//generates random pick 5 numbers
void generatePick5Numbers(int list[], int length) {
	//variables
	int num = 0;
	int count = 0;

	srand(time(0));

	list[0] = static_cast<int>(rand()) % 9 + 1;
	count = 1;
	while (count < 5) {
		num = static_cast<int>(rand()) % 9 + 1;
		if (seqSearch(list, count, num) == -1) {
			list[count] = num;
			count++;
		}//end if
	}//end while
}//end function

int seqSearch(const int list[], int listLength, int searchItem) {
	//variables
	int loc = 0;
	bool found = false;

	while (loc < listLength && !found) {
		if (list[loc] == searchItem) {
			found = true;
		}
		else {
			loc++;
		}
	}
	if (found) {
		return loc;
	}
	else {
		return -1;
	}
}
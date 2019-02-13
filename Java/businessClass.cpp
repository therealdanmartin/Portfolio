/*
Name:			Syndrone
Date:			9.36.AM
Description:	There are 14 seats MINIMUM on this plane, 10% is first class, 20% is business class, rest is coach
*/
 
#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include<cstdlib>
#include<random>

using namespace std;

void SetColor(int value) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void display(string out)
{
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 15); // define the range
	for (int i = 0; i < out.length(); i++)
	{
		SetColor(distr(eng));
		Sleep(20);
		cout << out.at(i);
	}
	SetColor(15);
}

void display1(string out)
{
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(1, 15); // define the range
	for (int i = 0; i < out.length(); i++)
	{
		SetColor(distr(eng));
		Sleep(1);
		cout << out.at(i);
	}
	SetColor(15);
}

int fs = 0;//# of first class seats
int bs = 0;//# of business class seats
int cs = 0;//# of coach seats

//This will Determine whether you are in first class, business class, or coach
int getSeatingSection(char& classType, int& row, char& column);

//This will display the plane and which seats are available or NAAWWWW
void showPlane(char showPlaneDiagram[][4], int row, char column);

//this is to have a running total in the whole thing
static double total = 0.0;

int main() {
	//list of strings with country names
	srand(time(NULL));
	const int ARRAYSZ = 10;
	string country[ARRAYSZ] = { "Bolivia", "Bulgaria", "Nauru", "Kyrgyzstan", "Nagorno-Karabakh Republic", "Comoros", "Kiribati", "Djibouti", "Guinea-Bissau", "Abkhazia" };
	int randCountry = rand() % 10 + 1;
	string ctry = country[randCountry];

	//variables
	char choice = ' '; //This will determine how many tickets they want to buy/when they wanna quit
	char seatingSection = ' '; //First class, Business, Coach
	char column = ' '; //Column of seat they are in
	int row = 0; //Row of seat they are in
	char showPlaneDiagram[10][4]; //Will show plane diagram with which seats are available and which are not
	double salesTax;

	//This will make the plane diagram 
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 4; y++) { //makes plane diagram
			showPlaneDiagram[x][y] = '*';
		}
	}
	display("Welcome to King Dan's Airlines!"); cout << endl;
	display("Would you like to reserve a seat on this plane(y/n)? ");
	
	cin >> choice; choice = static_cast<char>(toupper(choice));
	while (choice == 'Y') {//run if you want to buy a ticket
		getSeatingSection(seatingSection, row, column);
		showPlane(showPlaneDiagram, row, column);
		cout << endl;
		system("PAUSE");
		system("CLS");
		display("Would you like to reserve a seat on this plane(y/n)? ");
		cin >> choice; choice = static_cast<char>(toupper(choice));
		if (choice == 'N') {
			system("CLS");
			cout << fixed << setprecision(2); //set's precision
			display("You have purchased "); cout << fs; display(" first class tickets."); cout << endl;
			display("You have purchased "); cout << bs; display(" business class tickets."); cout << endl;
			display("You have purchased "); cout << cs; display(" coach class tickets."); cout << endl;
			salesTax = total * .081231;
			display("Your total for your flight to " + ctry + " comes out to "); cout << endl;
			cout << " \t" << left << setw(15) << "Tax " << right << " $" << setw(15) << salesTax << endl; //THIS LINES UP RECEIPT
			total += salesTax;
			cout << " \t" << left << setw(15) << "Total " << right << " $" << setw(15) << total << endl; //THIS LINES UP RECEIPT
			system("PAUSE");
			return 0; 
		}
	}//end of while loop
	
	system("CLS");
	
	cout << fixed << setprecision(2);// set's precision
	display("You have purchased "); cout << fs; display(" first class tickets."); cout << endl;
	display("You have purchased "); cout << bs; display(" business class tickets."); cout << endl;
	display("You have purchased "); cout << cs; display(" coach class tickets."); cout << endl;
	salesTax = total * .084421;
	display("Your total for your flight to " + ctry + " comes out to "); cout << endl;
	cout << " \t" << left << setw(15) << "Tax " << right << " $" << setw(15) << salesTax << endl; //THIS LINES UP RECEIPT
	total += salesTax;
	cout << " \t" << left << setw(15) << "Total " << right << " $" << setw(15) << total << endl; //THIS LINES UP RECEIPT
	system("PAUSE");

	//display("Your total for your flight to " + ctry + " comes to $"); cout << total; cout << ".00"; cout << endl; system("PAUSE"); //total cost for tickets

	return 0;
}

int getSeatingSection(char& classType, int& row, char& column) {
	//some user interaction will come into play here
	display("This airplane has 10 rows, with 4 seats in eah row! Choose Wisely!!"); cout << endl; //info
	display("Enter your ticket type! \nF for first class, \nB for Business Class, \nC for Coach Class: "); cout << endl;
	cin >> classType; classType = static_cast<char>(toupper(classType));//i got this toupper offline, it just makes it so it upper cases it
	while (classType != 'F' && classType != 'B' && classType != 'C') { // similar to the default part of a case, but just easier for me
		display("That is not a class of tickets budd..."); cout << endl;
		display("Enter your ticket type! \nF for first class, \nB for Business Class, \nC for Coach Class: "); cout << endl;
		cin >> classType; classType = static_cast<char>(toupper(classType)); system("CLS");
	}
	switch (classType) { //This determines what class the user will buy a ticket from
	case 'F': //This is for first class
		display("Row 1 and 2 are first class,\n"); 
		total = total+750.00; //first class ticket cost $750
		fs++;
		break;
	case 'B': //This is for business class
		display("Row 3 through 7 are business class,\n");
		total = total + 500.00; //business class ticket cost $500
		bs++;
		break;
	case 'C': //This is for Coach class
		display("Row 8 through 10 are coach class."); cout << endl;
		total = total + 250.00; //coach class ticket cost $250
		cs++;
		break;
	}//end of the switch
	//gets users row to sit in
	display("Please enter the row you would like to sit in: "); cout << endl; cin >> row; system("CLS");
	//gets users seat to sit in
	display("Please enter the seat you would like to sit in(A-D): "); cout << endl; cin >> column;
	if (column != 'A' && column != 'B' && column != 'C' && column != 'D') {
		display("That is not a valid seat! You have been removed from the facility.");
		cout << endl << endl;
		system("PAUSE");
		return -1;
	}
	else {
		column = static_cast<char>(toupper(column)); system("CLS");
	}
	
	return 0;
}//end of the getSeatingSection

void showPlane(char showPlaneDiagram[][4], int row, char column) {
	//variables
	int x = 0;
	int y = 0;
	//information regarding empty and full seats
	display("An * indicates that the seat is not occupied. "); cout << endl;
	display("An X indicates that the seat is occupied. "); cout << endl;

	//This will show what column it is with space in between, does not effect the *'s
	cout << setw(9) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << endl;

	//This will actively update the showPlaneDiagram
	showPlaneDiagram[row - 1][column - 65] = 'X'; 

	//print the Plane Diagram
	for (x = 0; x < 10; x++) {
		//this will print hte rows and their value(1-10 inclusive) and which row it is
		cout << left << setw(3) << "Row " << setw(2) << x + 1;
		for (y = 0; y < 4; y++) {
			cout << right << setw(4) << showPlaneDiagram[x][y];
		}
		cout << endl;
	}

}//end of showPlane
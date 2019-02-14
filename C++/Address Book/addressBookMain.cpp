#include<iostream>
#include<fstream>
#include<string>
#include "AddressBookType.h"

using namespace std;
void loadAddressBook(addressBookType& adBook);
void saveData(addressBookType& adBook);

void showMenu();

struct addybook {
	string firstname;
	string lastname;
	int month1;
	int day1;
	int year1;
	string streetName;
	string cityName;
	string state;
	int postalCode;
	int phoneNumber;
	string relationType;
};

void getData(ifstream& inf, addybook list[], int length);

int main() {
	addressBookType addressBook;
	string str;
	string str1;
	string str2;
	int choice;
	int loc;
	int month;

	loadAddressBook(addressBook);

	addressBook.sort();

	showMenu();

	cin >> choice;
	cin.ignore(100, '\n');

	while (choice != 9) {
		switch (choice) {
		case 1:
			cout << "Enter the last name of the person: ";
			getline(cin, str);
			cout << endl;
			
			loc = addressBook.search(str);

			if (loc != -1) {
				cout << str << " is in the address book" << endl;
			}
			else
				cout << str << " is not in the address book" << endl;
			break;
		case 2:
			cout << "Enter the last name of the person: ";
			getline(cin, str);
			cout << endl;

			loc = addressBook.search(str);

			if (loc != -1)
				addressBook.printAt(loc);
			else
				cout << str << " is not in the address book" << endl;
			break;
		case 3:
			cout << "Enter the month number: ";
			cin >> month;
			cin.ignore(100, '\n');
			cout << endl;

			addressBook.printNameInTheMonth(month);
			break;
		case 4:
			cout << "Enter starting last name: ";
			getline(cin, str1);
			cout << endl;
			cout << "Enter ending last name: ";
			getline(cin, str2);
			cout << endl;

			addressBook.printNamesBetweenLastNames(str1, str2);
			break;
		case 5:
			cout << "Enter person type Family, Friend, Business: ";
			getline(cin, str);
			cout << endl;
			addressBook.printNamesWithStatus(str);
			break;
		case 6:
			addressBook.print();
			break;
		case 7:
			saveData(addressBook);
			break;
		default:
			cout << "Invalid choice" << endl;
		}

		showMenu();
		cin >> choice;
		cin.ignore(100, '\n');
	}

	return 0;
}

void loadAddressBook(addressBookType& adBook)
{
	ifstream infile;

	//char fileName[50];
	string fileName;
	string first;
	string last;

	int month;
	int day;
	int year;

	string street;
	string city;
	string state;
	string zip;

	string phone;
	string pStatus;

	extPersonType temp;

	cout << "Enter file name: ";
	cin >> fileName;
	fileName = "C:/Users/dmartin416/Desktop/" + fileName + ".txt";
	cout << endl;

	infile.open(fileName);
	if (!infile)
	{
		cout << "Input file does not exists. "
			<< "Program terminates!!!" << endl;
		exit(0);
	}

	int i = 0;

	addybook addressBookxd[6];
	int numOfContacts = 6;
	getData(infile, addressBookxd, numOfContacts);

	/*infile >> first >> last >> month >> day >> year;
	infile.ignore(100, '\n');
	getline(infile, street);
	getline(infile, city);
	getline(infile, state);
	infile >> zip >> phone >> pStatus;*/

	while (infile)
	{
		temp.setInfo(first, last, month, day, year, street, city,
			state, zip, phone, pStatus);

		adBook.insertAt(temp, i);
		i++;

		infile >> first >> last >> month >> day >> year;
		infile.ignore(100, '\n');
		getline(infile, street);
		getline(infile, city);
		getline(infile, state);
		infile >> zip >> phone >> pStatus;
	}
}

void saveData(addressBookType& adBook)
{
	ofstream outfile;

	//char fileName[50];
	string fileName;
	cout << "Enter file name: ";
	cin >> fileName;
	fileName = "C:/Users/dmartin416/Desktop/" + fileName + ".txt";
	cout << endl;

	outfile.open(fileName);
	if (!outfile)
	{
		cout << "Unable to create the output file. "
			<< "Program terminates!!!" << endl;
		return;
	}

	adBook.saveData(outfile);
}

void showMenu()
{
	cout << "Welcome to the address book program." << endl;
	cout << "Choose among the following options:" << endl;
	cout << "1: To see if a person is in the address book"
		<< endl;
	cout << "2: Print the information of a person" << endl;
	cout << "3: Print the names of person having birthday in "
		<< "a particular month" << endl;
	cout << "4: Print the names of persons between two "
		<< "last names" << endl;
	cout << "5: Print the names of persons having a "
		<< "particular status" << endl;
	cout << "6: Print the address book" << endl;
	cout << "7: Save data" << endl;
	cout << "9: Terminate the program" << endl;
}

void getData(ifstream& inf, addybook list[], int length) {
	for (int i = 0; i < length; i++) {
		inf >> list[i].firstname >> list[i].lastname >> list[i].month1 >> list[i].day1 >> list[i].year1 >> list[i].streetName >> list[i].cityName >> list[i].state >> list[i].postalCode >> list[i].phoneNumber >> list[i].relationType;
	}
}
/*
Names:			Dan and Isaiah
Date:			09.20.18
Description:	Buy pokemon stuff
*/

#include<string>
#include<windows.h>
#include<iostream>
#include<iomanip>

using namespace std;

//Pawn Shop Prices

//Pokeballs
const int pokeball = 200;
const int greatball = 600;
const int ultraball = 800;
const int masterball = 10000;
//const int pokeballSale = 0;
//const int greatballSale = 0;
//const int ultraballSale = 0;
//const int masterballSale = 0;

//Pokemon
const int pikachu = 5000;
const int charmander = 5000;
const int bulpasaur = 5000;
const int squirtle = 5000;
//const int pikachuSale = 0;
//const int charmanderSale = 0;
//const int bulpasaurSale = 0;
//const int squirtleSale = 0;

//Items
const int rareCandy = 1000;
const int restore = 500;
const int revive = 250;
const int maxRepel = 750;
//const int rareCandySale = 0;
//const int restoreSale = 0;
//const int reviveSale = 0;
//const int maxRepelSale = 0;

//TMs
const int iceBeam = 2500;
const int blizzard = 2500;
const int arielAce = 2500;
const int ultraBeam = 2500;
//const int iceBeamSale = 0;
//const int blizzardSale = 0;
//const int arielAceSale = 0;
//const int ultraBeamSale = 0;

//pokemonPawnShop
void pokemonPawnShop();

void display(string out) { // this is to print out stuff one letter at a time
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		cout << out.at(i);
	}
}

void masterDisplay(string out) { // this is done for a master ball display to alternate between 2 colours alternating by letter
	system("COLOR 05");
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		if (i % 2 == 0)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout << out.at(i);
	}
}

void ultraDisplay(string out) {// this is done for a ultra ball display to alternate between 2 colours alternating by letter
	system("COLOR 04");
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		if (i % 2 == 0)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << out.at(i);
	}
}

void greatDisplay(string out) {// this is done for a great ball display to alternate between 2 colours alternating by letter
	system("COLOR 04");
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		if (i % 2 == 0)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << out.at(i);
	}
}

void pokeDisplay(string out) {// this is done for a poke ball display to alternate between 2 colours alternating by letter
	system("COLOR 04");
	for (int i = 0; i < out.length(); i++) {
		Sleep(20);
		if (i % 2 == 0)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << out.at(i);
	}
}

//1 : Blue
//2 : Green
//3 : Cyan
//4 : Red
//5 : Purple
//6 : Yellow(Dark)
//7 : Default white
//8 : Gray / Grey
//9 : Bright blue
//10 : Brigth green
//11 : Bright cyan
//12 : Bright red
//13 : Pink / Magenta
//14 : Yellow
//15 : Bright white

int main() {
	pokemonPawnShop(); // function call
}

void pokemonPawnShop() {
	//variables
	double total = 0.0;
	double tax = (total * .1);
	int choice = 0;
	double balance = 0.0;
	char correct = ' ';
	int pokeballs = 0;
	int pokemons = 0;
	int techMachines = 0;
	int items = 0;
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	int counter4 = 0;
	int counter5 = 0;
	int counter6 = 0;
	int counter7 = 0;
	int counter8 = 0;
	int counter9 = 0;
	int counter10 = 0;
	int counter11 = 0;
	int counter12 = 0;
	int counter13 = 0;
	int counter14 = 0;
	int counter15 = 0;
	int counter16 = 0;
	string totalForDay = " ";
	double totalSale = 0.0;
	string bubba = " ";
	string randy123 = " ";
	//This is my bubba proofing. You must enter the correct password to prove you are not bubba
	display("Are you bubba? ");
	cout << " > ";
	cin >> randy123;
	if (randy123 == "yes" || randy123 == "I AM BUBBA" || randy123 == "y" || randy123 == "Y" || randy123 == "YES" || randy123 == "YEs" || randy123 == "Yes" || randy123 == "yeS" || randy123 == "yEs") { // runs if bubba is honest
		cout << "Loading";
		Sleep(500);
		system("CLS");
		cout << "Loading.";
		Sleep(500);
		system("CLS");
		cout << "Loading..";
		Sleep(500);
		system("CLS");
		cout << "Loading...";
		Sleep(500);
		system("CLS");
		display("You are confirmed to be bubba. Be ready to be terminated.");
		cout << endl;
	}
	else {
		Sleep(1000);
		system("CLS");
		cout << "Loading";
		Sleep(500);
		system("CLS");
		cout << "Loading.";
		Sleep(500);
		system("CLS");
		cout << "Loading..";
		Sleep(500);
		system("CLS");
		cout << "Loading...";
		Sleep(500);
		system("CLS");
		cout << "Loading";
		Sleep(500);
		system("CLS");
		cout << "Loading.";
		Sleep(500);
		system("CLS");
		cout << "Loading..";
		Sleep(500);
		system("CLS");
		cout << "Loading...";
		Sleep(500);
		system("CLS");
		display("We do not believe you are not bubba, please answer this verification to prove you are not bubba.");
		cout << endl;
		display("What is 100/0? "); // verification so bubba cannot run script
		cout << " > ";
		cin >> bubba;
		if (bubba == "null" || bubba == "no answer" || bubba == "undefined") { // runs if 

			display("Welcome to the Pokemon Pawn Shop!");
			cout << endl;
			cout << endl;
			display("Feel free to stay as long as you wish!");
			Sleep(1000);
			system("CLS");
			display("How much money do you have to spend today(add a decimal at the end)? "); // gets your balance
			cin >> balance;
			Sleep(1000);
			system("CLS");

			do {
				system("CLS");
				system("COLOR 07");
				display("Please choose a Pokemon themed item from the Pokemon Pawn Shop!"); // menu
				cout << endl;
				cout << "\t\t1. Pokemon Balls" << endl;
				cout << "\t\t2. Pokemon " << endl;
				cout << "\t\t3. Items " << endl;
				cout << "\t\t4. Technical Machine " << endl;
				cout << "\t\t5. Sale " << endl;
				cout << "\t\t0. Checkout " << endl;
				cout << "\t\t> ";
				cin >> choice;
				system("CLS");


				switch (choice) {
				case 1: {  // runs if they want pokeballs
					char c = ' ';
					display("You have chosen to buy some Pokemons Balls! Is this correct(y/n)? ");
					cin >> correct;

					if (correct == 'y' || correct == 'Y') { // confirmation that they want it
						cout << "\t\*****************" << endl;
						cout << "\t\*1. Pokeball    *" << endl;
						cout << "\t\*2. Great Ball  *" << endl;
						cout << "\t\*3. Ultra Ball  *" << endl;
						cout << "\t\*4. Master Ball *" << endl;
						cout << "\t\*****************" << endl;
						cout << endl;
						cout << ">";
						cin >> pokeballs;
						system("CLS");
						switch (pokeballs) {
						case 1: {
							pokeDisplay("You have chosen to buy a PokeBall, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many pokeballs would you like to buy? ");
								cin >> counter1;
								total = total + (counter1*pokeball); // gets how many you want, multiplies by price, then adds to a running total
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 2: {
							greatDisplay("You have chosen to buy a Great Ball, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') { //  runs if you want great ball
								greatDisplay("How many great balls would you like to buy? ");
								cin >> counter2;
								cout << endl;
								total = total + (counter2*greatball);
								greatDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 3: {//  runs if you want ultra ball
							ultraDisplay("You have chosen to buy a Ultra Ball, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {//  confirmation
								ultraDisplay("How many ultra balls would you like to buy? ");
								cin >> counter3;
								total = total + (counter3*ultraball);
								cout << endl;
								ultraDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 4: {//  runs if you want master ball
							masterDisplay("You have chosen to buy a Master Ball, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') { //confirmation
								masterDisplay("How many master balls would you like to buy? ");
								cin >> counter4;
								total = total + (counter4*masterball);
								cout << endl;
								masterDisplay("Thank you for your business.");
								cout << endl;
								cout << total;
								Sleep(1000);
							}
							break;
						}
						default: {

							break;
						}
						}

					}
					else {
						system("CLS");
					}

					break;
				}
				case 2: {
					char c = ' ';
					display("You have chosen to buy some Pokemons! Is this correct(y/n)? ");
					cin >> correct;

					if (correct == 'y' || correct == 'Y') {//  runs if you want some pokemons
						cout << "\t\*****************" << endl;
						cout << "\t\*1. Pikachu     *" << endl;
						cout << "\t\*2. Charmander  *" << endl;
						cout << "\t\*3. Bulpasaur   *" << endl;
						cout << "\t\*4. Squirtle    *" << endl;
						cout << "\t\*****************" << endl;
						cout << endl;
						cout << ">";
						cin >> pokemons;
						system("CLS");

						switch (pokemons) {
						case 1: {//  runs if you want some pokemons pikachu
							pokeDisplay("You have chosen to buy a Pikachu, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Pikachus would you like to buy? ");
								cin >> counter5;
								total = total + (counter5*pikachu);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 2: {//  runs if you want some pokemons charmander
							pokeDisplay("You have chosen to buy a Charmander, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Charmanders would you like to buy? ");
								cin >> counter6;
								total = total + (counter6*charmander);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 3: { //  runs if you want some pokemons bulpasaur
							pokeDisplay("You have chosen to buy a Bulpasaur, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Bulpasaurs would you like to buy? ");
								cin >> counter7;
								total = total + (counter7*bulpasaur);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 4: { //  runs if you want some pokemons squirtle
							pokeDisplay("You have chosen to buy a Squirtle, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Squirtles would you like to buy? ");
								cin >> counter8;
								total = total + (counter8*squirtle);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;;
						}
						default: {

							break;
						}
						}
					}
					else {
						system("CLS");
					}

					break;
				}
				case 3: {//  runs if you want some items
					char c = ' ';
					display("You have chosen to buy some Pokemons Items! Is this correct(y/n)? ");
					cin >> correct;

					if (correct == 'y' || correct == 'Y') {
						cout << "\t\*****************" << endl;
						cout << "\t\*1. RareCandy   *" << endl;
						cout << "\t\*2. Revive      *" << endl;
						cout << "\t\*3. Restore     *" << endl;
						cout << "\t\*4. Repel       *" << endl;
						cout << "\t\*****************" << endl;
						cout << endl;
						cout << ">";
						cin >> items;
						system("CLS");

						switch (items) {
						case 1: {//  runs if you want some rare candies
							pokeDisplay("You have chosen to buy a Rare Candy, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Rare candies would you like to buy? ");
								cin >> counter9;
								total = total + (counter9*rareCandy);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 2: { //  runs if you want some revives
							pokeDisplay("You have chosen to buy a Revive, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Revives would you like to buy? ");
								cin >> counter10;
								total = total + (counter10*revive);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 3: { //  runs if you want some restores
							pokeDisplay("You have chosen to buy a Restore, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Restores would you like to buy? ");
								cin >> counter11;
								total = total + (counter11*restore);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 4: { //  runs if you want some repels
							pokeDisplay("You have chosen to buy a Repel, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Repels would you like to buy? ");
								cin >> counter12;
								total = total + (counter12*maxRepel);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						default: {

							break;
						}
						}
					}
					else {
						system("CLS");
					}

					break;
				}
				case 4: { //  runs if you want some technical machines
					char c = ' ';
					display("You have chosen to buy some Pokemons Technical Machines! Is this correct(y/n)? ");
					cin >> correct;

					if (correct == 'y' || correct == 'Y') {
						cout << "\t\*****************" << endl;
						cout << "\t\*1. Icebeam     *" << endl;
						cout << "\t\*2. Ariel Ace   *" << endl;
						cout << "\t\*3. Ultra Beam  *" << endl;
						cout << "\t\*4. Blizzard    *" << endl;
						cout << "\t\*****************" << endl;
						cout << endl;
						cout << ">";
						cin >> techMachines;
						system("CLS");

						switch (techMachines) {
						case 1: { //  runs if you want some icebeam
							pokeDisplay("You have chosen to buy a Icebeam, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Icebeams would you like to buy? ");
								cin >> counter13;
								total = total + (counter13*iceBeam);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 2: { //  runs if you want some ariel ace
							pokeDisplay("You have chosen to buy a Ariel Ace, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Ariel Aces would you like to buy? ");
								cin >> counter14;
								total = total + (counter14*arielAce);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 3: { //  runs if you want some ultra beams
							pokeDisplay("You have chosen to buy a Ultra Beam, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Ultra Beam would you like to buy? ");
								cin >> counter15;
								total = total + (counter15*ultraBeam);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						case 4: { //  runs if you want some blizzard
							pokeDisplay("You have chosen to buy a Blizzard, is this correct(y/n)? ");
							cout << endl;
							cin >> c;

							if (c == 'y' || c == 'y') {
								pokeDisplay("How many Blizzards would you like to buy? ");
								cin >> counter16;
								total = total + (counter16*blizzard);
								cout << endl;
								pokeDisplay("Thank you for your business.");
								cout << endl;
								Sleep(1000);
							}
							break;
						}
						default: {

							break;
						}
						}

					}
					else {
						system("CLS");
					}

					break;
				}
				default: {
					break;
				}
				case 5: {
					int freeitem = 0;
					int coupon1 = 7998508;
					int coupon2 = 0;
					int couponChoice = 0;
					/*
					A. % off a specific item
					B. % off total bill
					- Cannot let user use both
					*/
					display("I see you claim to have a coupon... "); //THIS IS COUPON STUFF 
					system("COLOR 04");
					display("This must mean you have a coupon code to enter... or else. ");
					cin >> coupon2;
					cout << endl;
					if (coupon2 == coupon1) {
						system("COLOR 02");
						display("Congradulations. You have correctly entered the coupon code.");
						cout << endl << endl;
						display("Please enter which type of coupon you would like: ");
						cout << endl;
						cout << "# # # # # # # # # # # # # # # # # # # # # # # # # #" << endl;
						cout << "#\t1. A free item                             #" << endl; //CHOOSE YOUR COUPON
						cout << "#\t2. A discount for your whole purchase      #" << endl;
						cout << "# # # # # # # # # # # # # # # # # # # # # # # # # #" << endl;
						cin >> couponChoice;
						switch (couponChoice) { //CHOOSE A FREE ITEM
						case 1: {
							display("What item would you like for free? ");
							cout << endl << "1. Pokeball";
							cout << endl << "2. Great Ball";
							cout << endl << "3. Ultra Ball";
							cout << endl << "4. Master Ball";
							cout << endl << "5. Pikachu";
							cout << endl << "6. Charmander";
							cout << endl << "7. Bulpasaur";
							cout << endl << "8. Squirtle";
							cout << endl << "9. Rare Candy";
							cout << endl << "10. Revive";
							cout << endl << "11. Restore";
							cout << endl << "12. Repel";
							cout << endl << "13. Icebeam";
							cout << endl << "14. Ariel Ace";
							cout << endl << "15. Ultra Beam";
							cout << endl << "16. Blizzard";
							cout << "\t\ >";
							cin >> freeitem;
							switch (freeitem) {
							case 1: {//okay so this is long, but it needs to be done, because i don't want to use array -- -200 for pokeball
								totalForDay = "You have received a free pokeball!";
								total = total - 200;
								break;
							}

							case 2: { // - 600 for great ball
								totalForDay = "You have received a free great ball!";
								total = total - 600;
								break;
							}

							case 3: { // - 800 for ultra ball
								totalForDay = "You have received a free ultra ball!";
								total = total - 800;
								break;
							}

							case 4: { // - 10000 for master ball
								totalForDay = "You have received a free master ball!";
								total = total - 10000;
								break;
							}

							case 5: {
								totalForDay = "You have received a free pikachu!";
								total = total - 5000;
								break;
							}

							case 6: {
								totalForDay = "You have received a free charmander!";
								total = total - 5000;
								break;
							}

							case 7: {
								totalForDay = "You have received a free bulpasaur!";
								total = total - 5000;
								break;
							}

							case 8: {
								totalForDay = "You have received a free squirtle!";
								total = total - 5000;
								break;
							}

							case 9: {
								totalForDay = "You have received a free rare candy!";
								total = total - 1000;
								break;
							}

							case 10: {
								totalForDay = "You have received a free revive!";
								total = total - 500;
								break;
							}

							case 11: {
								totalForDay = "You have received a free restore!";
								total = total - 250;
								break;
							}

							case 12: {
								totalForDay = "You have received a free repel!";
								total = total - 750;
								break;
							}

							case 13: {
								totalForDay = "You have received a free icebeam!";
								total = total - 2500;
								break;
							}

							case 14: {
								totalForDay = "You have received a free ariel ace!";
								total = total - 2500;
								break;
							}

							case 15: {
								totalForDay = "You have received a free ultra beam!";
								total = total - 2500;
								break;
							}

							case 16: {
								totalForDay = "You have received a free blizzard!";
								total = total - 2500;
								break;
							}
							}

						}
						case 2: {
							int randy = rand() % 100 + 1; // gives you a random sale off your total
							totalSale = total - (total*(.1*randy));
							cout << totalSale;
							Sleep(1000);
						}
						default: {

						}
						}
					}
				}
				}
			} while (choice != 0);
			if (((total + (total*.1)) - totalSale) > balance) {
				system("CLS"); // runs if you don't got enough balance
				system("COLOR 04");
				display("You do not have the sufficient funds for this purchase. You may not leave until you work off all this debt.");
				cout << endl;
				system("PAUSE");
			}
			else {
				pokeDisplay("Thank you for shopping with us today. Your order is: "); // receipt
				cout << endl;
				if (counter1 >= 1)
					cout << "Pokeballs - " << counter1;
				cout << endl;
				if (counter2 >= 1)
					cout << "Greatballs - " << counter2;
				cout << endl;
				if (counter3 >= 1)
					cout << "Ultraballs - " << counter3;
				cout << endl;
				if (counter4 >= 1)
					cout << "Masterballs - " << counter4;
				cout << endl;
				if (counter5 >= 1)
					cout << "Pikachu - " << counter5;
				cout << endl;
				if (counter6 >= 1)
					cout << "Charmander - " << counter6;
				cout << endl;
				if (counter7 >= 1)
					cout << "Bulpasaur - " << counter7;
				cout << endl;
				if (counter8 >= 1)
					cout << "Squirtle - " << counter8;
				cout << endl;
				if (counter9 >= 1)
					cout << "Rare Candy - " << counter9;
				cout << endl;
				if (counter10 >= 1)
					cout << "Revive - " << counter10;
				cout << endl;
				if (counter11 >= 1)
					cout << "Restore - " << counter11;
				cout << endl;
				if (counter12 >= 1)
					cout << "Repel - " << counter12;
				cout << endl;
				if (counter13 >= 1)
					cout << "Icebeam - " << counter13;
				cout << endl;
				if (counter14 >= 1)
					cout << "Ariel Ace - " << counter14;
				cout << endl;
				if (counter15 >= 1)
					cout << "Ultra Beam - " << counter15;
				cout << endl;
				if (counter16 >= 1)
					cout << "Blizzard - " << counter16;
				cout << endl;

				cout << totalForDay << endl; // total + sale + tax
				cout << "Your total for the day is: " << setprecision(2) << ((total + (total*.1)) - totalSale);
				cout << endl << "Today you saved " << totalSale << ".";
				cout << endl;
				system("PAUSE");
			}
		}
		else { //runs if bubba is running this code
			Sleep(1000);
			system("CLS");
			cout << "Loading";
			Sleep(500);
			system("CLS");
			cout << "Loading.";
			Sleep(500);
			system("CLS");
			cout << "Loading..";
			Sleep(500);
			system("CLS");
			cout << "Loading...";
			Sleep(500);
			system("CLS");
			display("Congradulations. You have proved you are...");
			Sleep(1000);
			display("NOT worthy to run this program BUBBA.");
			Sleep(1000);
			cout << endl;
			cout << endl;
			display("This program is too bubba proofed for you to run it haha.");
		}
	}
}
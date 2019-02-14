#include<iostream>

using namespace std;

enum objectType {ROCK, PAPER, SCISSORS};

//Function prototyoes 
void displayRules();
objectType retrievePlay(char Selection);
void convertEnum(objectType object);
bool validSelection(char Selection);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, int& winner);
void displayResults(int gCount, int wCount1, int wCound2);

int main() {
	int gameCount = 0;
	int winCount1 = 0;
	int winCount2 = 0;
	int gameWinner = 0;
	int hold;
	char response = ' ';
	char selection1 = ' ';
	char selection2 = ' ';
	objectType play1; //player 1's selection
	objectType play2; //player 2's selection

	displayRules();
	cout << endl << endl;
	cout << "Would you like to play a game(y/n)? ";
	cin >> response;

	while (response == 'Y' || response == 'y') {
		cout << "Player 1, Please enter your choice: ";
		cin >> selection1;
		system("CLS");

		cout << "Player 2, Please enter your choice: ";
		cin >> selection2;
		system("CLS");

		if (validSelection(selection1)
			&& validSelection(selection2)) { //checks for R, P, or S
			play1 = retrievePlay(selection1);
			play2 = retrievePlay(selection2);
			gameResult(play1, play2, gameWinner);
			gameCount++;

			if (gameWinner == 1)
				winCount1++;
			else if (gameWinner == 2)
				winCount2++;

		}
		cout << "Enter Y/y to play the game: ";
		cin >> response;
		cout << endl;
	}

	displayResults(gameCount, winCount1, winCount2);
	cin >> hold;
	return 0;
}

void displayRules() {
	cout <<"Un jugador que decide jugar rock vencera a otro jugador que haya elegido tijeras\n(roca tritura tijeras o a veces embota las tijeras), \n pero perdera contra alguien que haya jugado papel(papel cubre roca);\n un juego de papel perdera con un juego de tijeras(tijeras corta papel).";
}
objectType retrievePlay(char Selection) {
	objectType object;
	switch (Selection) {
		case 'R':
		case 'r':
		{
			object = ROCK;
			break;
		}
		case 'S':
		case 's':
		{
			object = SCISSORS;
			break;
		}
		case 'P':
		case 'p':
		{
			{
				object = PAPER;
			}
		}

		}
		return object;
}
void convertEnum(objectType object) {
	switch (object) {
	case ROCK:
		cout << "Rock";
		break;
	case PAPER:
		cout << "Paper";
		break;
	case SCISSORS:
		cout << "Scissors";
	}
}
bool validSelection(char Selection) {
	objectType object;
	switch (Selection) {
		case 'R':
		case 'r':
		case 'S':
		case 's':
		case 'P':
		case 'p':
			return true;
		default:
			return false;
	}
}
objectType winningObject(objectType play1, objectType play2) {
	if ((play1 == ROCK && play2 == SCISSORS) || (play2 == ROCK && play1 == SCISSORS)) {
		return ROCK;
	}
	else if ((play1 == ROCK && play2 == PAPER) || (play2 == ROCK && play1 == PAPER)) {
		return PAPER;
	}
	else {
		return SCISSORS;
	}
}
void gameResult(objectType play1, objectType play2, int& winner) {
	objectType winnerObject;

	if (play1 == play2) {
		winner = 0;
		cout << "Both players have selected ";
		convertEnum(play1);
		cout << ". Y'all boosie, this game dun end in a tye." << endl;
	}
	else {
		winnerObject = winningObject(play1, play2);
		cout << "playa 1 has selected ";
		convertEnum(play1);
		cout << ", and playa 2 has selected ";
		convertEnum(play2);
		cout << "." << endl;

		if (play1 == winnerObject)
			winner = 1;
		else if (play2 == winnerObject)
			winner = 2;

		cout << "Player " << winner << " wins the game. ";
	}
}
void displayResults(int gCount, int wCount1, int wCount2) {
	cout << "The total number of plays: " << gCount << endl;
	cout << "The number of plays won by playa 1: " << wCount1 << endl;
	cout << "The number of plays won by playa 2: " << wCount2 << endl;
}
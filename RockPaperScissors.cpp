#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void declareWinner(char winner);

int main() {
    srand(time(0));
    char player;
    char computer;
    char winner;
    string winnerName;

    player = getUserChoice();
    cout << "\nYou chose: ";
    showChoice(player);
    cout << endl;
    
    computer = getComputerChoice();
    cout << endl << "Computer chose: ";
    showChoice(computer);
    cout << endl;

    winner = chooseWinner(player, computer);
    cout << endl << "Winner: ";
    declareWinner(winnerName);

    return 0;
}

char getUserChoice() {
    char player;
    cout << "Rock-Paper-Scissors Game!!" << endl;

    do {
        cout << "**************************" << endl;
        cout << "Choose from the following below!" << endl;
        cout << endl << "'r' is for Rock" << endl;
        cout << "'p' is for Paper" << endl;
        cout << "'s' is for Scissors" << endl;
        cout << "Your choice is: ";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {
    char computer;
    int randomNum = rand() % 3;

    if (randomNum == 0) {
        computer = 'r';
    }
    else if (randomNum == 1) {
        computer = 'p';
    }
    else {
        computer = 's';
    }

    return computer;
}

void showChoice(char choice) {
    switch (choice) {
    case 'r':
        cout << "Rock" << endl;
        break;
    case 'p':
        cout << "Paper" << endl;
        break;
    case 's':
        cout << "Scissors" << endl;
        break;
    }
}

char chooseWinner(char player, char computer) {
    if (player == computer) {
        return 'T'; 
    }
    else if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') ||
        (player == 's' && computer == 'p')) {
        return 'P'; 
    }
    else {
        return 'C'; 
    }
}

void declareWinner(char winner) {
    string winnerName;
    if (winner == 'T') {
        cout << "It's a Tie!";
    }
    else if (winner == 'P') {
        winnerName = "Player wins!";
    }
    else if (winner == 'C') {
        winnerName = "Computer wins!";
    }
    cout << endl;
    return winnerName;
}
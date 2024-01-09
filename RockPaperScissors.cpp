#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    srand(time(0));
    char player;
    char computer;

    player = getUserChoice();
    cout << "\nYou chose: ";
    showChoice(player);
    cout << endl;
    
    computer = getComputerChoice();
    cout << "Computer chose: ";
    showChoice(computer);
    cout << endl;

    chooseWinner(player, computer);

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

void chooseWinner(char player, char computer) {
    switch (player) {
    case 'r':   
        if (computer == 'r') {
            cout << "It's a tie!" << endl;
        }
        else if(computer == 'p') {
            cout << "You Lose!" << endl;
        }
        else {
            cout << "You Win!" << endl;
        }
        break;
    case 'p':
        if (computer == 'r') {
            cout << "You Win!" << endl;
        }
        else if (computer == 'p') {
            cout << "It's a tie!" << endl;
        }
        else {
            cout << "You Lose!" << endl;
        }
        break;
    case 's':
        if (computer == 'r') {
            cout << "You Lose!" << endl;
        }
        else if (computer == 'p') {
            cout << "You Win!" << endl;
        }
        else {
            cout << "Its a tie!" << endl;
        }
        break;
               
    }
}

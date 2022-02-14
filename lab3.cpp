// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/15/22
// File: lab3.cpp
// Purpose: This program creates a sort of game as the user guides Normo as he fights several slimes.

#include <iostream>
using namespace std;

void greeting();
int slice(int attackVal);
int spin(int attackVal);
int trick(int attackVal, int healthVal);
int leave(int attackVal, int healthVal, int expVal);

int main(){
    greeting();
    int attackVal = 0;
    int healthVal = 0;
    int expVal = 0;
    cout << "What is your attack?" << endl;
    cin >> attackVal;
    cout << "What is your health?" << endl;
    cin >> healthVal;
    while (healthVal > 0){
        cout << "What will you do?" << endl << "  1. Slice" << endl << "  2. Spin" << endl << "  3. Trick" << "  4. Leave" << endl;
        string option;
        cin >> option;
        if (option == "Slice"){
                slice(attackVal);
                break;
        }
        else if (option == "Spin"){
                spin(attackVal);
                break;
        }
        else if (option == "Trick"){
                trick(attackVal, healthVal);
                break;
        }
        else if (option == "Leave"){
                leave(attackVal, healthVal, expVal);
                break;
        }
    }
}

void greeting(){
    cout << "Welcome to the Slime Fields, Normo!" << endl;
}
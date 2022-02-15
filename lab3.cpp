// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/15/22
// File: lab3.cpp
// Purpose: This program creates a sort of game as the user guides Normo as he fights several slimes.

#include <iostream>
using namespace std;

int attackVal = 0;
int healthVal = 1;
int expVal = 0;

void greeting();
void slice(int attackVal);
void spin(int attackVal);
void trick(int attackVal, int healthVal);
void leave(int attackVal, int healthVal, int expVal);

int main(){
    greeting();
    cout << "What is your attack?" << endl;
    cin >> attackVal;
    cout << "What is your health?" << endl;
    cin >> healthVal;
    while (healthVal > 0){
        cout << "What will you do?" << endl << "  1. Slice" << endl << "  2. Spin" << endl << "  3. Trick" << endl << "  4. Leave" << endl;
        string option = "";
        cin >> option;
        if (option == "Slice"){
            slice(attackVal);
        }
        else if (option == "Spin"){
            spin(attackVal);
        }
        else if (option == "Trick"){
            trick(attackVal, healthVal);
        }
        else if (option == "Leave"){
            leave(attackVal, healthVal, expVal);
            }
    }
    cout << "You have died." << endl;
    leave(attackVal, healthVal, expVal);
    return 0;
}

void greeting(){
    cout << "Welcome to the Slime Fields, Normo!" << endl;
}
void slice(int attackVal){
    if (attackVal >= 10){
        cout << "Killed 1 slime, gained 1 exp." << endl;
        expVal++;
    }
    else{
        cout << "Your attack was too low. You lost 1 health." << endl;
        healthVal--;
    }
    return;
}
void spin(int attackVal){
    if (attackVal < 10){
        cout << "Your attack was too low. You lost 10 health" << endl;
        healthVal -= 10;
    }
    return;
}
void trick(int attackVal, int healthVal){
    int temp;
    attackVal = temp;
    healthVal = attackVal;
    healthVal = temp;
    return;
}
void leave(int attackVal, int healthVal, int expVal){
    cout << "Normo:" << endl << "Attack - " << attackVal << endl << "Health - " << healthVal << endl << "Exp - " << expVal;
    return;
}
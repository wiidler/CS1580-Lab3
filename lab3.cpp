// Programmer: Will Weidler
// Student ID: wawq97
// Section: 301
// Date: 2/15/22
// File: lab3.cpp
// Purpose: This program creates a sort of game as the user guides Normo as he fights several slimes.

#include <iostream>
using namespace std;
// Description: Greets the user
// Pre: None
// Post: One cout statement
void greeting();
// Description: Normo (the user) slices one slime, if his attack is greater or equal to 10, he gains 1 exp, if less than 10, he loses 1 health
// Pre: attackVal and healthVal should be given values from the user
// Post: If attackVal is less than 10, 1 is subtracted from healthVal. If attackVal is greater or equal to 10, 1 is added to expVal
void slice(int & attackVal, int & healthVal, int & expVal);
// Description: Normo (the user) spins into 10 slimes, if his attack is greater or equal to 15, he gains 10 exp. If attack is less than 10, he loses 10 health.
// Pre: attackVal and healthVal should be given values from the user
// Post: If attackVal is less than 15, 10 is subtracted from healthVal. If attackVal is greater or equal to 15, 10 is added to expVal
void spin(int & attackVal, int & healthVal, int & expVal);
// Description: Normo switches his health and attack values
// Pre: attackVal and healthVal should be given values from the user
// Post: attackVal is now equal to Normo's former healthVal and healthVal is now equal to Normo's former attackVal
void trick(int & attackVal, int & healthVal);
// Description: Normo (the user) leaves his quest, and thereby ends the program
// Pre: None
// Post: Output a cout statement with a summary and increments leaveVal to progress the main and exit the function
void leave(int & attackVal, int & healthVal, int & expVal, int & leaveVal);

int main(){
    greeting();
    int attackVal = 0; // All variables needed for program, necessary to embark on his journey.
    int healthVal = 1;
    int expVal = 0;
    int leaveVal = 0;
    cout << "What is your attack?" << endl;
    cin >> attackVal;
    cout << "What is your health?" << endl;
    cin >> healthVal;
    while (healthVal > 0 && leaveVal == 0){
        cout << "What will you do?" << endl << "  1. Slice" << endl << "  2. Spin" << endl << "  3. Trick" << endl << "  4. Leave" << endl;
        string option = "";
        cin >> option;
        if (option == "Slice"){ // Redirects to slice function
            slice(attackVal, healthVal, expVal);
        }
        else if (option == "Spin"){ // Redirects to spin function
            spin(attackVal, healthVal, expVal);
        }
        else if (option == "Trick"){ // Redirects to trick function
            trick(attackVal, healthVal);
        }
        else if (option == "Leave"){ // Redirects to leave function
            leave(attackVal, healthVal, expVal, leaveVal);
        }
    }
    if (healthVal <= 0){ // When Normo dies, it displays the death message and redirects to leave function, then exits smoothly
        cout << "You have died." << endl;
        leave(attackVal, healthVal, expVal, leaveVal);
    }
    return 0;
}

void greeting(){
    cout << "Welcome to the Slime Fields, Normo!" << endl;
}
void slice(int & attackVal, int & healthVal, int & expVal){
    if (attackVal >= 10){
        cout << "Normo swung his sword and killed 1 slime, gained 1 exp." << endl;
        expVal++;
    }
    else{
        cout << "Your attack was too low. You lost 1 health." << endl;
        healthVal--;
    }
    return;
}
void spin(int & attackVal, int & healthVal, int & expVal){
    if (attackVal < 15){
        cout << "Your attack was too low. You lost 10 health" << endl;
        healthVal -= 10;
    }
    else{
        cout << "Normo closes his eyes and spins in a circle with his sword out! As he opens his eyes, he sees 10 slime puddles. Success...? Gained 10 exp!" << endl;
        expVal += 10;
    }
    return;
}
void trick(int & attackVal, int & healthVal){
    cout << "Attack is now " << healthVal << ", Health is now " << attackVal << endl;
    int temp = attackVal;
    attackVal = healthVal;
    healthVal = temp;
    return;
}
void leave(int & attackVal, int & healthVal, int & expVal, int & leaveVal){
    if (healthVal <= 0){
        healthVal = 0;
    }
    else{
      cout << "You have left." << endl;
    }
    cout << "Normo:" << endl << "Attack - " << attackVal << endl << "Health - " << healthVal << endl << "Exp - " << expVal << endl;
    leaveVal++;
    return;
}

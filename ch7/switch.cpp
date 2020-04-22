#include <iostream>
using namespace std;
void loadGame(){}
void playGame(){}
void playMultiplayerGame(){}


int main(){
    cout<< "1. Load Game \n";
    cout<< "2. Play Game \n";
    cout<< "3. Play Multiplayer Game \n";
    cout<< "4. Exit \n";
    int input;
    cout << "Enter your selection : ";
    cin >>input;
    switch(input){
        case 1:
            loadGame();
            break;
        case 2:
            playGame();
            break;
        case 3:
            playMultiplayerGame();
            break;
        case 4:
            cout << "Tyank you !! \n";
            break;
        default:
            cout << "Bad Input !!\n";
            break;
    }
}
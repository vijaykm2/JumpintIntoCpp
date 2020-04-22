#include <iostream>
using namespace std;
struct PlayerInfo {
    int skill_level;
    string name;
};
int main(){
    cout<< "empty \n";
    PlayerInfo players[5];
    for(int i=0; i<5; i++){
        cout <<"Please enter name of player "<<i<<" :\n";
        cin >>players[i].name;
        cout <<"Please enter slill level of player "<<players[i].name<<" :\n";
        cin >> players[i].skill_level;

    }
    for(int i=0; i<5; i++){
        cout << players[i].name << " is at skill level "<< players[i].skill_level<< endl;
    }
}
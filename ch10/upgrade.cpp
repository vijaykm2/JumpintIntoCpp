#include <iostream>
using namespace std;
struct EnemySpaceShip {
    int xCoOrd;
    int yCoOrd;
    int weaponPwr;

};
EnemySpaceShip getNewEnemy(){
    EnemySpaceShip ship = {
            0,0,20
    };
    return ship;
}
EnemySpaceShip upgradeWeapon(EnemySpaceShip ship){
    ship.weaponPwr +=10;
    return ship;

}
int main(){
    cout<< "empty \n";
    EnemySpaceShip ship = getNewEnemy();
    ship = upgradeWeapon(ship);
    cout << ship.weaponPwr;
}
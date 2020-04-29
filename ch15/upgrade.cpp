#include<iostream>

using namespace std;
struct EnemySpaceShip{
    int xCoordinate;
    int yCoordinate;
    int power;
    EnemySpaceShip* p_next_enemy;
};

EnemySpaceShip* getNextEnemy(){
    EnemySpaceShip* p_next = new EnemySpaceShip;
    p_next -> xCoordinate=0;
    p_next -> yCoordinate=0;
    p_next -> power = 20;
    p_next -> p_next_enemy = NULL;
    return p_next;
}
void upgradeWeapons(EnemySpaceShip* ship){
    ship -> power += 10;

}
EnemySpaceShip* addNewEnemyToList(EnemySpaceShip* p_list){
    EnemySpaceShip* ship = getNextEnemy();
    ship -> p_next_enemy = p_list;
    return ship;

}
int main(){
    EnemySpaceShip* ship = getNextEnemy();
    cout<< ship -> power<<endl;
    for(int i=0;i<10;i++){
        ship = addNewEnemyToList(ship);
    }
    EnemySpaceShip* current = ship;

    while (current  != NULL){
        upgradeWeapons(current);

        cout<< ship -> power<<endl;
        current = current -> p_next_enemy;

    }

}
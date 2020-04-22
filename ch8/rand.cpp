#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    cout<< "empty \n";
    long time = time(NULL);
    srand(time);
    cout<< time << " "<< rand()<<endl;

    
}
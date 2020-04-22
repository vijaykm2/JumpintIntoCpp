#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randRange(int low, int high);

int main(){
    cout<< "empty \n";
    int seed = time(NULL);
    srand(seed);
    cout<< seed << " "<< randRange(11,111)<<endl;

    
}
int randRange(int low, int high){
    return rand()%(high-low+1)+low;
}
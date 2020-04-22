#include <iostream>
using namespace std;
void changeArg(int x){
    x +=5;
}
int main(){
    int y =12;
    changeArg(y);
    cout << y ;
}
#include <iostream>
using namespace std;
int count = 0;
void changeArg(int x){
    x +=5;
    count++;
}
int main(){
    int y =12;
    changeArg(y);
    cout << y << "count"<<count<<endl;

    changeArg(y);
    cout << y << "count"<<count<<endl;
}
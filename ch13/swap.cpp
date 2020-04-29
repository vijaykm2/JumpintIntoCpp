#include <iostream>
using namespace std;
void swap1(int x, int y){
    int temp = x;
    x= y;
    y = temp;
}
void swap2(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
void swap3(int& x, int& y){
    int temp = x;
    x = y,
    y=temp;
}
int main(){
    cout<< "swap1 \n";
    int x = 1, y=2;
    swap1(x, y);
    cout << x<< " "<<y<<endl;

    cout<< "\nswap2 \n";

    swap2(&x, &y);
    cout << x<< " "<<y<<endl;
    cout<< "\nswap3 \n";
    swap3(x,y);
    cout << x<< " "<<y<<endl;

    cout<< "\nswap3 \n";
    swap3(x,y);
    cout << x<< " "<<y<<endl;




}
#include <iostream>
using namespace std;
int main(){
    cout<< "empty \n";
    int x;
    int *p_int;
    p_int = &x;
    cout << "address = "<< p_int;
    cout << " Entera number: \n";
    cin >>x;
    cout << *p_int<<endl;
    x += 10;
    cout << *p_int<< endl;
    cout << &x<<endl;

}
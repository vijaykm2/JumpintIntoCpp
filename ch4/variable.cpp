#include <iostream>
using namespace std;
int main(){
    for(;;){
        cout<< "Enter a number: \n";
        int num;
        cin >> num;
        if(num<10){
            cout << "less than 10 \n";
        } else if (num > 10){
            cout << "greater than 10 \n";
        } else {
            cout << "equal to \n";
        } 
    }

}
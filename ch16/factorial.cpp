#include<iostream>

using namespace std;

long factorial(long num){
    if (num < 1){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return num *factorial(num-1);
    }
}

int main(){
    cout << "Enter a number: \n";
    long input;
    cin >> input;
    long result = factorial(input);

    cout << "Factorial of "<< input << " = "<< result;


}
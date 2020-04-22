#include <iostream>
using namespace std;
int add(int x, int y){
    return x+y;
}
int main(){
    cout<< "Enter first number"<<endl;
    int num1, num2;
    cin >> num1;
    cout<< "Enter second number"<<endl;
    cin >> num2;
    cout << "sum of " << num1 << " and "<< num2 << " = "<< add(num1, num2)<< endl;
}
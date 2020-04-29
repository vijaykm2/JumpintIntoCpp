#include<iostream>

using namespace std;

void print(int num){
    cout << num;
    if(num<999){
        print(num+1);
    }
    cout << num;
}
int main(){
    print(1);
    cout << endl;
}
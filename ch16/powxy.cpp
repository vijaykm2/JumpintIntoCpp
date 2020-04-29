//
// Created by vijay on 4/28/20.
//

#include<iostream>
using namespace std;

long pow(long x, long y){
    if(y ==0){
        return 1;
    } else if (y >0 ){
        return x * pow(x, --y);
    } else {
        return 1/(x * pow(x, ++y));

    }
}
int main(){
    long x, y;
    cout<<" Enter num1: \n";
    cin>>x;
    cout<<" Enter num2: \n";
    cin>>y;
    long result = pow(x,y);
    cout<<" pow("<<x<<", "<<y<<") = "<<result<<"\n";
}


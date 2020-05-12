//
// Created by vijay on 5/12/20.
//
#include "string";
#include "iostream";
#include "getLine.h";
using namespace std;

int getLine(){
    string input;
    cout << "Enter a string : \n";
    getline(cin, input, '\n');
    cout << "You typed: "<<input<<endl;
}

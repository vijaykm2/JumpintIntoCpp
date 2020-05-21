//
// Created by vijay on 5/12/20.
//
#include "string";
#include "iostream";
#include "getLine.h";
using namespace std;

void printStr(const string &str){
    cout << str;
}

int getLine(){
    string input;
    cout << "Enter a string : \n";
    getline(cin, input, '\n');
    cout << "You typed: "<<input<<endl;
    string str="asdf "+input;
    cout<<str<<" "<< str.length()<<"\n";
    for(int i=0;i<str.length();++i){
        cout<<str[i]<<" ";
    }
    int count=0;
    for(int i = str.find("cat", 0); i!=string::npos; i=str.find("cat", i)){
        count++;
        i++;
    }
    cout<<"the word cat appears in "+input+" "<<count<<" times \n";
}

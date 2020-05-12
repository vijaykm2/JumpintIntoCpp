//
// Created by vijay on 5/7/20.
//


#include<vector>
#include<iostream>
#include "map"
#include "../ch19/getLine.h"

using namespace std;

int main() {
    vector<int> a_vector(10);
    cout << a_vector.size();
    for (int i = 0; i < 1000; i++) {
        a_vector.push_back(i);
    }
    cout << a_vector.size();
    for (vector<int>::iterator itr = a_vector.begin(), end = a_vector.end(); itr != end; ++itr) {
        cout << *itr << " ";
    }
    cout << "\n" << a_vector.size();
    map<string, string> name_email;
    name_email["vijay"] = "vijay@maail.com";
    name_email["vijay2"] = "vijay2@mail.com";
    cout << name_email["vijay"];
    name_email.erase("vijay");
    cout << name_email["vijay"];
    cout << "\n mapitr \n";
    for (map<string, string>::iterator itr = name_email.begin(), end = name_email.end(); itr != end; ++itr) {
        cout << "key = " << itr->first << " , value = " << itr->second << endl;
    }
    map<string, string>::iterator itr = name_email.find("asdf");
    if(itr != name_email.end()){
        cout<<"found";
    } else {
        cout << "\n not found";
    }
    getLine();

}


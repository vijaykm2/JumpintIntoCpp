//
// Created by vijay on 5/14/20.
//

#include "define.h"
#include "iostream"
using namespace std;

void define(){
    cout << "inside define";
    int x=0;int y=0;
#ifdef DEBUG
    cout << "inside ifdef";
#endif
#ifndef DEBUG
    cout<< "inside ifndef";
#endif
}
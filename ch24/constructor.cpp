//
// Created by vijay on 5/19/20.
//

#include "constructor.h"
#include "iostream"


using namespace std;

class Foo {
public: Foo(){
    cout << "Constructor for foo\n";
};
public: ~Foo(){
        cout << "destructor for foo\n";

    }
};
class Bar: public Foo {
public: Bar(){
    cout << "Constructorfor bar \n";
}
public: ~Bar(){
        cout << "destructor for bar\n";

    }
};
int main() {
    Bar bar;
}
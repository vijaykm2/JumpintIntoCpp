#include <iostream>
#include <string>
using namespace std;
int main(){
    string first_name;
    string last_name;
    cout << "Enter first name : ";
    cin >> first_name;
    cout << "Enter last name : ";
    cin >> last_name;
    string full_name = first_name +" "+last_name;
    cout << "Your full name is "<< full_name<<"\n";

}
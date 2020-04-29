#include<iostream>

using namespace std;
void recurse(int count){
    cout<<count<<"\n";
    recurse(++count);
}
int main(){
    recurse(1);
}
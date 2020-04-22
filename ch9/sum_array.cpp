#include <iostream>
using namespace std;
int sum_array(int values[], int size){
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum += values[i];
    }
    return sum;
}
int main(){
    int size = 10;
    cout<< "Enter " << size << " values: \n";
    int values[size] ;
    for(int i=0; i<size; i++){
        cin >> values[i];
    }
    cout<< " Sum = "<< sum_array(values, size);

}
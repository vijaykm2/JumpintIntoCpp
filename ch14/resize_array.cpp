//
// Created by vijay on 4/23/20.
//
#include<iostream>
using namespace std;

int *growArray(int* p_values, int *size);
void printArray(int* p_values, int size,int elementsSet);

int main(){
    int nextElement = 0;
    int size = 2;
    int *p_values = new int[size];
    int val;
    cout << "Please enter a number or 0 to exit: \n";
    cin >>val;
    while (val !=0){
        if(size == nextElement+1){
            p_values = growArray(p_values, &size);

        }
        p_values[nextElement] = val;
        nextElement++;
        cout << "Current array values are : \n";
        printArray(p_values, size, nextElement);
        cout << "Please enter a number or 0 to exit: \n";
        cin >> val;
    }
    delete []p_values;

}
void printArray(int *p_values, int size, int elementSet){
    cout << "Total size of array is : "<< size << endl;
    cout << "Number of elements in array is : "<< elementSet << endl;
    cout << "Values in array : " << endl;
    for(int i=0;i<elementSet;i++){
        cout<<"p_values["<<i<<"> = "<<p_values[i]<<endl;
    }

}
int *growArray(int* p_values, int *size){
    cout << "size in grow array"<< *size<< endl;
    *size *=2;
    int *p_new_values = new int[*size];
    for(int i=0;i<*size;i++){
        cout << "inside growArray for i = "<<i<<" p_values[i] ="<< p_values[i]<< endl;
        p_new_values[i]= p_values[i];
    }
    delete []p_values;
    return p_new_values;

}


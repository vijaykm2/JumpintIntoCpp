#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int findSmallestRemainingElement(int array[], int size, int index);
void swap(int array[], int firstIndex, int secondIndex);
void sort(int array[], int size){
    int index = -1;
    for(int i = 0; i< size;i++){
        index = findSmallestRemainingElement(array, size, i);
       // cout << "index = "<< index;
        swap(array, i, index);
    }
}
int findSmallestRemainingElement(int array[], int size, int index){
    int smallest = index;
    for(int i = index+1;i<size;i++){

        if(array[i]<array[smallest]){
           // cout << " i = "<< i << " smallest = "<< smallest<< " "<< "array[i]  = "<<array[i]<< " array[smallest] = "<< array[smallest]<< endl;
            smallest = i;
        }
    }
    return smallest;
}
void swap(int array[], int firstIndex, int secondIndex){
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}
void displayArray(int arr[], int size){
    cout << "{    \n";
    for(int i = 0;i<size;i++){
        cout<<"    "<<arr[i]<<",\n";
    }
    cout << "    }\n";
}
int main(){
    cout<< "Enter size: \n";
    int size = 0;
    cin>> size;
    srand(time(NULL));
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i] = rand()%100;
    }
    cout<<"Initial array: \n";
    displayArray(arr, size);
    sort(arr, size);
    cout<<"sorted array: \n";
    displayArray(arr, size);

}
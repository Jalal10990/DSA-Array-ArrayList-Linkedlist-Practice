
#include<iostream>
using namespace std;

int main(){
    int size = 4;
    int *arr = new int[size];

     arr[0] = 101;
    arr[1] = 104;
    arr[2] = 102;
    arr[3] = 103;

    int pos = 1;

    int* newArr = new int[size - 1];
    
    for(int i = 0; i< pos; i++){
        newArr[i] = arr[i];

    }
    for(int i = pos + 1; i< size; i++){
        newArr[i - 1] = arr[i];

    }
    delete[] arr;
    arr = newArr;
    size--;

    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    delete[] arr;

    return 0;


}
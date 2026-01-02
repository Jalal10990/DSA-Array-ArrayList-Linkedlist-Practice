// Dynamic array using pointers  = array list

// Arraylist = array whose size can change at runtime 

// int* arr = new int[size];
//size detected at runtime
//stored in heap memory
//create arraylist
//int size = 3;
//int* books = new int[size];
// books[0] = 101;
// books[1] = 102;
// books[2] = 103;

#include <iostream>
using namespace std;

int main() {
    int size = 3;
    int* arr = new int[size];

    arr[0] = 101;
    arr[1] = 102;
    arr[2] = 103;

    int value = 104;
    int pos = 2;

    int* newArr = new int[size + 1];

    for(int i = 0; i < pos; i++)
        newArr[i] = arr[i];

    newArr[pos] = value;

    for(int i = pos; i < size; i++)
        newArr[i + 1] = arr[i];

    delete[] arr;
    arr = newArr;
    size++;

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}


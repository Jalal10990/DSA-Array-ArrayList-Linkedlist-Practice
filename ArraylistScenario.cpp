
#include<iostream>
using namespace std;

//function to print arraylist
void printList(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";

    }
    cout<< endl;
}

int main(){

    int* courses = new int[3];
    int size = 3;

    courses[0] = 101;
    courses[1] = 102;
    courses[2] = 103;
cout<< " Initial Couirses: ";
printList(courses, size);


    //insert at end

    int* newArr = new int[size+1];

    for(int i = 0; i< size; i++)
        newArr[i] = courses[i];
    
    newArr[size] = 104;

    delete[] courses;
    courses = newArr;
    size++;

    cout<<"After Insert at End; ";
    printList(courses, size);


    //insert at start
    //shift all element right
    //insert at index 0

    newArr = new int[size + 1];
    newArr[0] = 100;

    for(int i = 0; i< size; i++){
        newArr[i + 1] = courses[i];
    }
    delete[] courses;
    courses = newArr;
    size++;
    cout << "After Insert at Start: ";
    printList(courses, size);

   //insert at middle
    int mid = size /2;
    newArr = new int[size + 1];

    for(int i = 0; i< mid; i++){
        newArr[i] = courses[i];

    }
    newArr[mid] = 150;

    for(int i = mid; i< size; i++){
        newArr[i+1] = courses[i];
    }
    delete[] courses;
    courses  = newArr;
    size++;

     cout << "After Insert at Middle: ";
    printList(courses, size);

    //insert at specific position

    int pos = 4;
    newArr = new int[size + 1];

    for(int i = 0; i< pos;  i++){
        newArr[i] = courses[i];
    }
    newArr[pos] = 160;

    for(int i = pos; i < size; i++){
        newArr[i+1] = courses[i];
    }
    delete[] courses;
    courses = newArr;
    size++;

    cout << "After Insert at Position 4: ";
    printList(courses, size);

    //deletion

    pos = 2;
    newArr = new int[size - 1];

    for(int i = 0; i < pos; i++){
        newArr[i] = courses[i];
    }

    for(int i = pos + 1; i < size; i++){
        newArr[i -1] = courses[i];

    }
    delete[] courses;
    courses = newArr;
    size--;

      cout << "After Deletion at Index 2: ";
    printList(courses, size);

 delete[] courses;

    return 0;
}
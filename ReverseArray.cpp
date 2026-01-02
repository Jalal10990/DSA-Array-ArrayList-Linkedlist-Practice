
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {12, 23, 34, 45, 67};
    int start = 0;
    int end = 4;
    int temp;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for(int i = 0; i < 5; i++){
        cout<< arr[i] <<" ";
    }
    return 0;

}
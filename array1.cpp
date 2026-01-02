
#include<iostream>
using namespace std;
int main(){

    int marks[5] = {2, 4, 6, 8, 3};
    int sum = 0;
    float average;


    //calculate sum
    for(int i = 0; i < 5; i++){
        sum = sum + marks[i];
    }
    
     //calslute average
     average = sum / 5.0;

     cout<< "Total = "<< sum << endl;
     cout<< "Average = "<<average;

     return 0;
}
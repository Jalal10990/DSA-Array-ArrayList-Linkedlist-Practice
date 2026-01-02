
#include <iostream>
using namespace std;

int main(){

   int product[5] = {2,45,3,56,4};
   int key;
   bool found = false;

   key = 3;

   //linear search
   for(int i = 0; i < 5; i++){
    if(product[i] == key){
        found = true;
        break;
    }
   }
   if(found)
   cout<< "Product Found";
   else
   cout<< "Product not found";

   return 0;
}

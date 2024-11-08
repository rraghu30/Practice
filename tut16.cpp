#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

void swap(int a, int b){ // temp a b
    int temp = a;       //4     4 5
    a = b;              //4     5 5
    b = temp;           //4     5 4
  }

void swapPointer(int* a, int* b){ // temp a b
    int temp = *a;                //4     4 5
    *a = *b;                      //4     5 5
    *b = temp;                    //4     5 4
}  

int main(){
    int x = 4, y = 5;
    // cout <<"the sum of 4 and 5 is "<<sum(a, b);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(a, b);  // This will not swap a and b
   // swapPointer(&x, &y); // This will swap a and b using pointer reference
   
   swapReferenceVar(x, y); //This will swap a and b using reference variable
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
}
#include <iostream>

using namespace std;

 int main(){
     // what is pointers? ____> data type which holds the address of other data types

     int a = 3;
     int * b = &a;
     b = &a;
     //  & ---->(value of) address of operator
     cout<<"The address of a is "<<&a<<endl;
     cout<<"The address of a is "<<b<<endl;

   // ----> (value at)dereference of operator
     cout<<"The value at address of b is "<<*b<<endl;
     
    // pointers to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address value(value at)(c) is "<<c<<endl;
    
    return 0;
 }
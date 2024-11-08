#include <iostream>

using namespace std;

int main(){
    /*loop in c++: 
    There are three types of loops in c++
    1. For loop
    2. While loop
    3.Do while loop
    */

    // For loop in C++;
    //  int i=1;
    //  cout<<i;
    //  i++;

    /* Syntax for loop
     for(intialization; condition; updation)
     { 
        loop body(C++ code);
     }
     */

    //While loop in c++:
    /* syntax
     While (condition)
        c++ statement
        */
       // printing 1 to 40 using while loop

    //    int i=1;
    //    while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    //    }

    /* do while loop in c++
      syntax 
      do
      {
        c++ statement;
      }while(condition);
      */
      // printing 1 to 50 using do while loop

      int i=1;
      do
      {
        // code 
        cout<<i<<endl;
        i++;

      }while(i<=50);

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int marks[] = {23, 45, 56, 86};
    int mathMarks[4];
     mathMarks[0] = 2256;
     mathMarks[1] = 756;
     mathMarks[2] = 456;
     mathMarks[3] = 556;
     cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    { 
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }


    // pointer and arrays
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p;
  return 0;  
}
#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
} 

int main(){
    ep Raghu;
    union money m1;
    m1.rice = 34;
    cout<<m1.rice;
    // <struct employee ajay;
    // struct employee ankit;
    // Raghu.eId = 1;
    // Raghu.favChar = 'c';
    // Raghu.salary = 1200000;
    // cout<<"The value is "<<Raghu.salary<<endl;
    // cout<<"The value is "<<Raghu.salary<<endl;
    // cout<<"The value is "<<Raghu.salary<endl;

    return 0;
}
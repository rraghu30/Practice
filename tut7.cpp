#include <iostream>

 using namespace std; 

 int c = 45;

 int main(){

     int a, b, c; 
     cout<<"Enter the value of a:"<<endl;
     cin>> a;
     cout<<"Enter the value of b:"<<endl;
     cin>>b; 
     c = a + b;
     cout<<"The sum is "<<c<<endl;
     cout<<"The global c is "<<::c;
     float d = 34.4F;
     long double e = 34.4L;
     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
     cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
     return 0;
 }
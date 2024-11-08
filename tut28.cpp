#include<iostream>
using namespace std;

class Y;
class X
{
  int data;
  public:
     void setValue(int value)
     {
        data = value;
     }
    friend void add(X, Y); 
};

class Y
{
    int data;
    public:
       void setValue(int value)
       {
        data = value;
       }
     friend void add(X, Y);  
};     

void add(X o1, Y o2){
    cout<<"Summing data of X and Y object gives me "<<o1.data + o2.data<<endl;
}

int main()
{
    X a;
    a.setValue(4);

    Y b;
    b.setValue(7);

    add(a, b);

    return 0;
}
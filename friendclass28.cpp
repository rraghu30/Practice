#include<iostream>
using namespace std;

class c2;
class C1
{
    int val1;
    publi:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout<< val1 <endl;
    }
    friend void exchange(c1 &, c2 &);
};

class C2
{
    int val2 ;
    publi:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout<< val2 <endl;
    }
    friend void exchange(c1 &, c2 &);
};

void exchange(c1 & x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;

}

int main()
{
  c1 oc1;
  c2 oc2;
  oc1.indata(34);
  oc2.indata(67);
  exchange(oc1, oc2);

  cout<<"The value after exchanging becomes :"<<oc1.display<<endl;
    return 0;
}
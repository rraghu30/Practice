#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with 2 argument "<<endl;
    return a+b;

}

int sum(int a, int b, int c){
    cout<<"Using function with 3 argument"<<endl;
    return a+b+c;

}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"Then sum of 3, 4 and 8 is <<sum(3,4,8)"<<endl;

    return 0;
}
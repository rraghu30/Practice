#include <iostream>

 using namespace std;

 int main(){
    // cout<<"This is tutorial 9";/
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // 2. Selection control structure: If else-if else ladder
    // if((age<18) &&(age>0)){ 
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 1. Selection control structure : switch case statements
    switch (age)
    {
    
    case 18:
        /* code */
        cout<<"You are 18";
        break;
    case 22:
        /* code */
        cout<<"You are 22";
        break;
    case 2:
        /* code */
        cout<<"You are 2";
        break;
    default:
    cout<<"No special cases"<<endl;
       break;      
    }
    return 0;
     }
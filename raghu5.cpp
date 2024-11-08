#include<iostream>
using namespace std;

int main(){

//     int a = 4;
//     int b = 6;

//     cout<<" a&b " << (a&b) << endl;
//     cout<<" a|b " << (a|b) << endl;
//     cout<<" ~a " << (~a) << endl;
//     cout<<" a^b " << (a^b) << endl;

//     cout<< (17>>1) <<endl;
//     cout<< (17>>2) <<endl;
//     cout<< (19<<1) <<endl;
//     cout<< (21<<2) <<endl;

//     int i = 7;

//     cout<< (++i) <<endl;
//     // 8
//     cout<< (i++) <<endl;
//     //8 , i = 9
//     cout<< (i--) <<endl;
//     //9 , i = 8
//     cout<< (--i) <<endl;
// // 7 , i = 7


// FIBONACCI SERIES

    // int n = 10;

    // int a = 0;
    // int b = 1;
    // cout<<a <<" "<<b;
    // for(int i = 1; i <= n; i++){

    //   int nextNumber = a + b;
    //   cout<<nextNumber<<" ";  

    //   a = b;
    //   b = nextNumber; 
    // }
  
// *********************************

    // int n;
    //  cout<<" Enter the value of n " <<endl;
    //  cin>>n;

    //  bool isPrime = 1;

    //  for( int i = 2; i <= n; i++){

    //     // rem = 0 , not a prime number
    //     if(n%2 == 0){
    //      //   cout<< "Not a prime number " <<endl;
    //         isPrime = 0;

    //         break;
    //     }
    //     if(isPrime == n) {
    //         cout<<" Not a prime number "<<endl;
    //     }
    //         // rem != 0 , prime number
        
    //     else {
    //          cout<<"is a Prime Number "<<endl;
    //     }
    //  }


    int n;
    cin>>n;
    int fact = 0;
    int i;
    for( i = n; i > 0; i-- ){
        fact += n*(n-1);

    cout<<"Factorial of"<<n<<" is " <<fact;
    }
    return 0;
    }
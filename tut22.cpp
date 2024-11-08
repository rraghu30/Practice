 #include<iostream>
 using namespace std;

 class binary{
            string s;

 public:
         void read(void);
         void chk_bin(void);
         void ones_compliment(void);
         void display(void);
        };

void binary :: read(void){
         cout<<"Enter a binary number ";
         cin>>s;
}
        
void binary :: chk_bin(void){
      for(int i = 0; i < s.lenght(); i++)
      {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorret binary format"<<endl;
            exit(0);
        }
            
      }
    }

    void binary :: ones_compliment(void)
    {
        cout<<"Display your binary number";<<endl;
        for(int i = 0; i < s.length(); i++){
            if(s.at(i)=='0'){
                s.at(i) = '1';

            }
            else
            {
                 s.at(i) ='0';
            }
        }
    }

    void binary :: display(void)
    {
        cout<<"Displaying your binary number"<<endl;
        for (int i = 0; i < s.lenght(); i++){
            cout << s.at(i);
        }
        cout<<endl;
    }
 int main(){
      // OOPs - classes and objects

      //C++ -->initially called  --> C with classes by stroustroup 
      // class --> extension of structure (in C)
      // structures had limitations
      //     --> members are public
      //     --> no methods
      //  classes = struture + more
      // classes can have methods and properties
      // classes  --> can make few members as private & few as public
      // structure in C++ are typedefd
      // you can declare objects along with the class declartion like this :
        // Class Employee{
              // Class definition 
        //} raghu, rohit, devansh
        // harry.salary = 8 makes no sense if salary is private

        // Nesting of member functions

       binary b;
       b.read();
       b.chk_bin();
       b.display();
       b.ones_compliment();
       b.display();


    return 0;
 }
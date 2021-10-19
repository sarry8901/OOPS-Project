#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Abstraction{
 public:
  void intro(){
      cout<<"\nhere intro of abstraction\n";
  }
  void details(){
      cout<<"\nhere details of abstraction\n";
  }
  void code(){
      cout<<"\nhere code of abstraction\n";
  }
  void example(){
      cout<<"\nhere example of abstraction\n";
  }

  void fun2(){
      cout<<"\n\n";
      cout<<"Enter 1 for Intro of abstr\n ";
      cout<<"Enter 2 for Details of abstr\n ";
      cout<<"Enter 3 for Code of abstr\n ";
      cout<<"Enter 4 for Example of abstr\n ";
      int ch;
      cout<<"Enter your Choice: ";
      cin>>ch;
      switch(ch){
          case 1:
            intro();
            break;
         case 2:
            details();
            break;
        case 3:
           code();
           break;
        case 4:
         example();
          break;
        default:
         cout<<"Invalid Choice\n";
           
      } 
       
  }

};

class Learn: public Abstraction{
  public:
  void fun1(){
      cout<<endl;
    cout<<"Enter 0 for Exit\n ";
    cout<<"Enter 1 for learning abstraction\n ";
    cout<<"Enter 2 for learning encapsulation\n ";
    cout<<"Enter 3 for learning polymorphism\n ";
  
    while(1){
        int ch;
        cout<<"Enter the choice: ";
        cin>>ch;
         if(!ch){
             break;
         }
         else{
        switch(ch){
          
              

          case 1: 
            fun2();
            break;
          case 2:
            //fun3();  // function for other concepts
            break;
          case 3:
            //fun3();
            break;

          default:
            cout<<"Invalid Choice\n";
            break;  

        }
         }
    }


  }

};

int main(){
   Learn l1;
   l1.fun1();

    return 0;
}


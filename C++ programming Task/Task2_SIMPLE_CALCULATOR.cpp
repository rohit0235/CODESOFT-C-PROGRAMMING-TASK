// Task 2
// internee name - Rohit Kumar Sahu
//Building a sinple Calculator


#include <iostream>
using namespace std;

int main(){
    cout<<"Hello I am your Calculator"<< endl;
    double a,b;
    char operate;

    cout<<"Enter your first number: "<<endl;
    cin>>a;
    cout<<"Enter your second number: "<<endl;
    cin>>b;

    cout<<"Enter what you want to do (+,-,*,/)"<< endl;
    cin>>operate;
    
    
    
    switch (operate)
    {
     case '+':
        cout<<"your answer is : "<<a+b;
        break;
     case '-':
        cout<<"your answer is : "<<a-b;
        break;
     case '*':
        cout<<"your answer is : "<<a*b;
        break;
     case '/':
        cout<<"your answer is : "<<a/b;
        break;
     
     default:
        cout<<"Enter right operator";
    }

   return 0;

    

}

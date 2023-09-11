#include<iostream>
using namespace std;
int main()
{
	//logical operators
cout<<((4>6)&&(8>3))<<"\n";
cout<<((4<8)||(3>8))<<"\n";
cout<<!((4<8)||(3>8))<<"\n";

int a=40;
int b=20;
    //Arithmetic operators
    cout<<"result of arithmetic operator are"<<"\n";
    cout<<"addition of a and b is"<<a+b<<"\n";
    cout<<"subtraction of a and b is"<<a-b<<"\n";
    cout<<"multiplication of a and b is "<<a*b<<"\n";
    cout<<"divisions of a over b is"<<a%b<<"\n";
    //Unary operators
    cout<<"increases the value of a variable by 1 using post increament"<<a++<<"\n";
    cout<<"increases the value of a variable by 1 using pre increament"<<++<<"\n";
    cout<<"decreases the value of b variable by 1 using post decrement"<<b--<<"\n";
    cout<<"decreases the value of b variable by 1 using pre decrement"<<--b<<"\n";
      //Assignment operator
      cout<<"result of assignment and compound assignment operator are"<<"\n";
      int marks = 10;
      cout<<"marks are"<<marks<<"\n";
       //Compound assignment operators
       marks += 10;
       marks -= 10;
       marks /= 2;
       marks %= 2;
       //comparison opetratpors
       cout<<(a<b)<<"\n";
       cout<<(a>b)<<"\n";
       cout<<(a<=b)<<"\n";
       cout<<(a>=b)<<"\n";
       cout<<(a!=b)<<"\n";
       cout<<(a==b)<<"\n";
   }
}

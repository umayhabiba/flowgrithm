//Title:Write a program that displays the following shape using nested for loop.
//  *****
//*       *
//*       *
//*       *
//  *****
#include<iostream>
using namespace std;
int main ()
{
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(i==1||i==5||j==1||j==5){
			cout<<"*";
		}
		else 
		cout<<" ";
		}
		cout<<endl;
   }
}  

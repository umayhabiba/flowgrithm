//Title:Write a program that displays the following shape using nested for loop.
//*****
//  ****
//   ***
//    **
//        *
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n=5;
   for(i=n; i>=1; i--)
   {
   for(j=n-i; j>0; j--)
   cout<<" ";
  for(k=i; k>0; k--)
   cout<<"*";
   cout<<endl;
  }
}

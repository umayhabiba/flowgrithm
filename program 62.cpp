//Title:Write a program that input a number and check whether it is armstrong number or not
//hint:   153  =  (1)^3  + (5)^3 +  (3)^3
#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<"enter a number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum){
	cout<<"Armstrong"<<endl;
    }
	else
	cout<<"not Armstrong"<<endl;
	return 0;
}

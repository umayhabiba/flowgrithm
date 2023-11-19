#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	int sum;
	int product;
	float avg;
	cout<<"enter first num=";
	cin>>a;
	cout<<"enter second num=";
	cin>>b;
	cout<<"enter third num=";
	cin>>c;
	cout<<"enter fourth num=";
	cin>>d;
	sum=a+b+c+d;
	product=a*b*c*d;
	avg=sum/4;
    cout<<"sum of 4 num="<<sum<<"\n";
    cout<<"product of 4 num="<<product<<"\n";
    cout<<"avg of 4 num="<<avg<<"\n";
    return 0;
}


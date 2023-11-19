#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int temp;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
    cout<<"after exchange values" "\n";
    cout<<"value of a"<<a<<"\n";
    cout<<"value of b"<<b<<"\n";
    return 0;
}

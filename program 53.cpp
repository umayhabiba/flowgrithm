//Title:Write a program that displays the following shape using nested do-while loop.
//4	4	4	4
//3	3	3
//2	2
//1
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}

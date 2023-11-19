//Title:: Write a program that displays the following shape using nested for loop.
//0
//01
//012
//0123
//01234
//012345
#include<iostream>
using namespace std;
int main ()
{
	int i,j,n=5;
	for(i=0; i<=n; i++){
		for( j=0; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int c=1,fact=1;
    int n;
    cout<<"enter the num" "\n";
    cin>>n;
    do{
        fact=fact*c;
        c++;
    }
        while(c<=n);
           cout<<"fact of num"<<fact<< "\n";
                return 0;
   }

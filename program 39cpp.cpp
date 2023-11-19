#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter a num";
    cin>>n;
    for(int i=1;i<=n;i++){
            fact=fact*i;
            }
            cout<<"fact of n "<<fact<< "\n";
            return 0;
}

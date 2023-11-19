#include<iostream>
using namespace std;
int main()
{
    int n=7;
    for(int i=n;n>=1;i--)
    {
          for(int j=i;j>0;j--)
          {
             cout<<"*";
          }
    cout<<"\n";
   }
    return 0;
}

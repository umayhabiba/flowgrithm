#include<iostream>
using namespace std;
int main()
{
    int a,b,gcd;
    cout<<"enter 2 num";
    cin>>a>>b;
    for(int i=1;i<=a&&i<=b;i++){
            if(a%i==0&&b%i==0){
             gcd=i;
             }
    }
     cout<<"gcd =" <<gcd ;
     return 0;
     }
             

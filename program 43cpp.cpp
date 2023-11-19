#include<iostream>
using namespace std;
int main()
{
    int N,j=1,sum=0;
    cout<<"enter the num";
    cin>>N;
    while(j<=N){
       sum=sum+(j*j);
       j++;
       }
       cout<<("sum of square of numbers from 1 to n\n",N,sum);
       return 0;
       }

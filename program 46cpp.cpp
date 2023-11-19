#include<iostream>
using namespace std;
int main()
{
    int i,x,result;
    double sum;
    sum=1;
    cout<<"enter the value of x";
    cin>>x;
    for(i=1;i<=4;i++){
       result=(i+1)*pow(x,i);
       sum=sum+result;
       }
       cout<<"sum of series 1+2x+3x^2+4x^3+5x^4"<<sum;
       return 0;
       }

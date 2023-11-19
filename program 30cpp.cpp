#include<iostream>
using namespace std;
int main()
{
    int num,c,fact;
    c=1;
    fact=1;
    cout<<"enter an number";
    cin>>num;
    while(c<=num){
                fact=fact*c;
                c++;
                }
                cout<<"factorial="<<fact<< "\n";
                return 0;
}

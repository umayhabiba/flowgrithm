#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"enter your choice" "\n";
    cin>>n;
    cout<<"enter 2 num" "\n";
    cin>>a>>b;
    switch(n){
              case 1:
              cout<<"sum of num"<<a+b<< "\n";
              break;
              case 2:
              cout<<"sub of num" <<a-b<< "\n";
              break;
              case 3:
              cout<<"mul of num" <<a*b<< "\n";
              break;
              case 4:
              cout<<"division of num" <<a/b<< "\n";
              break;
              case 5:
              cout<<"modulus of num" <<a%b<< "\n";
              break;
              default:
              cout<<" go to difference code" "\n";
              }
              return 0;
              }

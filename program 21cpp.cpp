#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    if(a<b)
        if(a<c){
                cout<<"smallest number is"<<a<<endl;
               }
         else{
              cout<<"smallest number is"<<c<< "\n";
              }
    else if(b<c){
         cout<<"smallest number is "<<b<<endl;       
               }
         else{
              cout<<"smallest number is"<<c<<endl;
              }
              return 0;
}
         

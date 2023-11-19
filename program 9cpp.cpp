#include<iostream>
#define PI 3.147
using namespace std;
int main()
{
    int r;
    int area=4*(PI*r*r);
    int circum=4/3*(PI*r*r*r);
    cout<<"enter the r of cube";
    cin>>r;
    cout<<"area of cube"<<area<<"\n";
    cout<<"circum of cube"<<circum<<"\n";
    return 0;
}

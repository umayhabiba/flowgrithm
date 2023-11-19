#include<iostream>
using namespace std;
int main()
{
    int a,b,c,area;
    float s;
    double const sqrt=0.5;
    cout<<"enter 3 sides of triangle";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area= s*(s-a)*(s-b)*(s-c);
    area = sqrt*(area);
    cout<<"area is"<<area<<"\n";
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int radius,choice,area,circum;
    const double PI= 3.147;
    area=PI*(radius*radius);
      circum=2*(PI*radius);
    cout<<"enter the radius""\n";
    cin>>radius;
    cout<<"enter choice as 1 for area and 2 for circum" "\n";
    cin>>choice;
    if(choice==1){
                  cout<<"area=" <<area;
}
    else if(choice==2){
                 cout<<"circum=" <<circum;
}
   return 0;
}

#include<iostream>
#define PI 3.147
using namespace std;
int main()
{
	int radius;
	int circum=2*(PI*radius);
	float area=PI*(radius*radius);
	cout<<"enter the radius of circle";
	cin>>radius;
	cout<<"area of the circle"<<area<<"\n";
	cout<<"circum of circle"<<circum<<"\n";
	return 0;
}

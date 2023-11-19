#include<iostream>
using namespace std;
int main()
{
    int salary,grade,bonus;
    cout<<"enter the salary";
    cin>>salary;
    cout<<"enter the grade";
    cin>>grade;
      if(grade>15){
      bonus=salary*50/100;
}
      else {
      bonus=salary*25/100;
}
      salary=salary+bonus;
    cout<<"salary="<<salary<<"\n";
    return 0;
}

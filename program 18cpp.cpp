#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"enter the score";
    cin>>score;
    if(score>=90){
                  cout<<"grade is A""\n";
}
    else if(score>=80){
           cout<<"grade is B""\n";
}
    else if(score>=70){
           cout<<"grade is C""\n";
}
   else if (score>=60){
           cout<<"grade is D""\n";
}
    else if(score<50){
          cout<<"below grade""\n";
}
    return 0;
}

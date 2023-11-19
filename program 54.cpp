//Title:Write a program that displays the following shape using nested for loop.
//*
//**
//***
//****
//*****
#include<iostream>
using namespace std;
int main ()
{
	int i,j;
		for(int i=1; i<=5; i++){
			for(int j=1; j<=i; j++){
				cout<<"*";
			}
			cout<<endl;
		}
}

#include<iostream>
#include<stdio.h>
using namespace std;
// write a program to accept 3 no and check wheather the 1st is b/w other 2 no
int main()
{
	int n1, n2, n3;
	cout<<"enter 1st no.";
	cin>>n1;
	cout<<"enter 2nd no.";
	cin>>n2;
	cout<<"enter 3rd no.";
	cin>>n3;
	
	if(n1>n2 && n1<n3)
	{
		cout<<"True";
	}
	else
	{
		cout<<"false";
	}
	
}

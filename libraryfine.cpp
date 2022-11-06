#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int d, fine;
	
	cout<<"enter no. of days: ";
	cin>>d;
	
	if(d<5)
	{
		fine=10*d;
		cout<<"The fine is: "<<fine;
	}
  	else if(d<=10 && d>=6)
  	{
  	    fine=15*d;
		cout<<"The fine is: "<<fine;  	
	}
	else if(d>100)
	{
		fine=100*d;
		cout<<"The fine is: "<<fine;
	}
	else
	{
		cout<<"the fine is more than 100";
	}
	  
}

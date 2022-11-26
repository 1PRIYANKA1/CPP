#include<iostream>
#include<stdio.h>
using namespace std;
int isEven(int)
int main()
{
	int i,x;
	cout<<"enter a no.";
	cin>>i;
	isEven(i);
	x=isEven(i);
	{
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	
}
int isEven(int i)
{
	if(i%2==0)
	{
		return 1;
	}
	else
	{
	    return 0;
	}
}

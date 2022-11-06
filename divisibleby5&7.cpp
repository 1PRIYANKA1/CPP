#include<iostream>
#include<stdio.h>
using namespace std;
// accept a no from user and check whether it is divisible by 5 & 7
int main()
{
	int n;
	cout<<"enter a no.";
	cin>>n;
	
	if(n%5==0 && n%7==0)
	{
		cout<<"divisible by 5 & 7";
	}
	else if(n%5==0 && n%7!=0)
	{
		cout<<"divisible by 5 & not divisible by 7";
	}
	else if (n%5!=0 && n%7==0)
	{
		cout<<"divisible by 7 & not divisible by 5 ";
		
	}
	else
	
	{
		cout<<"not divisible";
	}
}

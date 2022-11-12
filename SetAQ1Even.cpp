//Write a program to accept an integer and display all even numbers upto n.
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter an integer";
	cin>>n;
	
	for(i=1; i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
	}
}

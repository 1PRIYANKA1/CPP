#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a[100], n, i;
	cout<<"enter the value";
	cin>>n;
	for(i=0; n>0; i++)
	{
		a[i]=n%n;
		n=n/2;
		
	}
	for(i=i-1; i>=0; i--)
	{
		cout<<a[i];
	}
}

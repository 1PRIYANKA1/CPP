#include<iostream>
#include<stdio.h>
using namespace std;
int isPrime(int);
int main()
{
	int f,m;
	cout<<"enter 1st no.";
	cin>>f;
	cout<<"enter last no.";
	cin>>m;
	
	for(int i=f;i<m;i++)
	{
		int a=isPrime(i);
		if(a==1)
		{
			cout<<i<<endl;
		}
	}
}

int isPrime(int n)
{
	int flag=1;
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

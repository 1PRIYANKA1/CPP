#include<iostream>
#include<stdio.h>
using namespace std;
int lcm(int,int);
int main()
{
	int n1,n2;
	cout<<"enter 1st no.";
	cin>>n1;
	cout<<"enter 2nd no.";
	cin>>n2;
	lcm(n1,n2);
	
}
int lcm(int n1, int n2)
{
	int i,lcm,h;
	for(i=1; i<=n1 && i<=n2; i++) 
	{
		if(n1%i==0 && n2%i==0)
		h=i;
		
	}
	lcm=n1*n2/h;
	cout<<"lcm is= "<<lcm;
}

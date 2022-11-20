#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int sine(int);
int cosine(int);
int logf(int);
int power(int,int);
int square(int);
int main()
{
	int c, n, x;
	cout<<"enter your choice"<<endl;
	cout<<"1.sine"<<endl<<"2.cosine"<<endl<<"3.log"<<endl<<"4.power"<<endl<<"5.square root"<<endl;
	cin>>c;
	
	
	switch(c)
	{
		case 1: cout<<"enter a number";
		cin>>n;
		sine(n);
		break;
		
		case 2: cout<<"anter a number";
		cin>>n;
		cosine(n);
		break;
		
		case 3: cout<<"enter a number";
		cin>>n;
		logf(n);
		break;
		
		case 4: cout<<"enter a number";
		cin>>n;
		power(n,x);
		break;
		
		case 5: cout<<"enter a number";
		cin>>n;
		square(n);
		break;
		
		case 6: exit(0);
	}
	
   
}

int sine(int n)
{
	cout<<sin(n);
}
cosine(int n)
{
	cout<<cos(n);
}
logf(int n)
{
	cout<<log(n);
}
power(int n,int x)
{
	cout<<pow(n,x);
}
square(int n)
{
	cout<<sqrt(n);
}

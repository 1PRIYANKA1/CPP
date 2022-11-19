#include<iostream>
#include<stdio.h>
using namespace std;
int swap(int,int);
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	swap(a,b);
}
int swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<endl;
	cout<<b;
}

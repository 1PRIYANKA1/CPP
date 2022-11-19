#include<iostream>
#include<stdio.h>
using namespace std;
void circle(int);
int main()
{
	int r;
	cout<<"enter value of r";
	cin>>r;
	circle(r);
}
void circle(int r)
{
	int a;
	a=3.14*r*r;
	cout<<"area of circle is  "<<a;
}

#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,d;
	cout<<"enter the value of x1= ";
	cin>>x1;
	cout<<"enter the value of y1= ";
	cin>>y1;
	cout<<"enter the value of x2= ";
	cin>>x2;
	cout<<"enter the value of y2= ";
	cin>>y2;
	
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout<<"distance= "<<d;
}

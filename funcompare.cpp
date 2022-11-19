#include<iostream>
#include<stdio.h>
using namespace std;
int compare(int,int);
int main()
{
	int x,y;
	cin>>x>>y;
	int res=compare(x,y);
	cout<<res;
}
int compare(int x, int y)
{
	if(x>y)
	return x;
	else
	return y;
}

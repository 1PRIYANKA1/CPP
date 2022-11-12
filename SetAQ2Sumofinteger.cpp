//Accept 2 integers x and y and calculate the sum of all integers between x and y (both inclusive).
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x, y, sum;
	cout<<"enter the value of 1st integer";
	cin>>x;
	cout<<"enter the value of 2nd integer";
	cin>>y;
	
	while(x<=y)
	{
		sum=sum+x;
		x++;
	}
	cout<<sum;
}

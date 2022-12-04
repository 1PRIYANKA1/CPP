#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,po=0,neg=0,zero=0;
	cout<<"enter the count=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		{
			po++;
		}
		if(arr[i]<0)
		{
			neg++;
		}
		if(arr[i]==0)
		{
			zero++;
		}
		else
		{
			cout<<"enter a valid value";
		}
	}
	cout<<"positive= "<<po;
	cout<<"negative= "<<neg;
	cout<<"zero= "<<zero;
}

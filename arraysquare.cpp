#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,arr[2][2],n;
	cout<<"enter number= ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(i==j)
			{
				cout<<"["<<arr[i][j]<<"]";
			}	
		}
	}
}

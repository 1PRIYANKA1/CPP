#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i,temp,sum=0,temp1;
	cout<<"enter a number= ";
	cin>>n;
	while(n>0)
	{
		temp=n%10;
		sum=(sum*10)+temp;
		n=n/10;
		cout<<n;
	}
	if(temp1==sum)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
		
	}
}

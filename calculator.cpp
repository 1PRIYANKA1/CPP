#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n1, n2, cal;
	char a;
	cout<<"enter the 1st number= ";
	cin>>n1;
	cout<<"enter the operator= ";
	cin>>a;
	cout<<"enter the 2nd number= ";
	cin>>n2;
	
	if(a=='+')
	{
		cal=n1+n2;
		cout<<"addition= "<<cal;
	}
	
	else if(a=='-')
	{
		if(n1<n2)
		{
			cout<<"---> n1 should be greater than n2";
			exit(0);
		}
		
			cal=n1-n2;
			cout<<"subtraction= "<<cal;
		
	} 
	
	else if(a=='*')
	{
		cal=n1*n2;
		cout<<"multiplication= "<<cal;
	}
	
	else if(a=='/')
	{
		if(n2==0)
		{
			cout<<"---> n2 should be greater than 0";
			exit(0);
		}
			cal=n1/n2;
			cout<<"division= "<<cal;
   }
		
	
	   else
	   {
		cout<<"you have entered wrong operand enter again";
	   }
}
	

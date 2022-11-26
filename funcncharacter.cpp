#include<iostream>
#include<stdio.h>
using namespace std;
char nchar(char,int);
int main()
{
	int n;
	char ch;
	cout<<"enter a character & range";
	cin>>ch;
	cin>>n;
	nchar(ch,n);
	
}
char nchar(char ch,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		ch++;
		cout<<ch;
	}
}

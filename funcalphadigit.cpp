#include<iostream>
#include<stdio.h>
using namespace std;
char alpha(char);
int main()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	alpha(ch);
	int a=alpha(ch);
	if(a==1)
	{
		cout<<"alphabet";
    }
    else if(a==2)
	{
    	cout<<"digit";
	}
	else
	{
		cout<<"special character";
    }	
}
char alpha(char ch)
{
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	return 1;
	else if(ch>='0'&&ch<='9')
	return 2;
	else
	return 3;
}


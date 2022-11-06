// 20 accept 3 sides of triangle input, and print wheather triangle is valid or not
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int s1, s2, s3;
	cout<<"enter 1st side";
	cin>>s1;
	cout<<"enter 2nd side";
	cin>>s2;
	cout<<"enter 3rd side";
	cin>>s3;
	
	if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
	{
		cout<<"the triangle is valid";
	}
	else
	{
		cout<<"the triangle is not valid";
	}
}


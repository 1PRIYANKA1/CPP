//Write a program to accept an integer and count the number of  digits in the number.
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n, i;
	cout<<"enter the number";
	cin>>n;
	for(i=0; n>0; i++)
	{
	n=n/10;
    }
    cout<<"total digits"<<i<<endl;
    
}

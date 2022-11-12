//write a program to accept a character, an integer n and display the next n characters.
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n, i;
	char ch;
	cout<<"enter the character ";
	cin>>ch;
	cout<<"enter en integer ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		ch++;
		cout<<"next character is: ";
		cout<<ch<<endl;
	}
}

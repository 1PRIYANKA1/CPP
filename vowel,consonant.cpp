#include<iostream>
#include<stdio.h>
using namespace std;
// accept a character from a user and check whether it is a vowel & consonant
int main()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	
	if(ch=='A'|| ch=='E' || ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"the character is vowel";
	}
	else
	{
		cout<<"consonant";
	}
}

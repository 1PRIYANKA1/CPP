#include<stdio.h>
#include<iostream>
using namespace std;
int charnum(int);
int main()
{
	char str[100];
	int i,al=0,no=0,sp=0;
	cout<<"enter a character= ";
	cin>>str;
	for(i=0;i<str[i];i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
		al++;
	  	}
		else if(str[i]>='0' && str[i]<='9')
		{
		no++;
		}
		else
		sp++;
	}
	cout<<"alphabet= "<<al<<endl;
	cout<<"numbers= "<<no<<endl;
	cout<<"special characters= "<<sp;
	
}

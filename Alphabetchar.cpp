#include<iostream>
#include<stdio.h>
using namespace std;
char chr(char);
int main()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	chr(ch);
}
char chr(char ch)
{
	char x;
	if((ch>96 && ch<=122) || (ch>=65 && ch<=90))
	{
		if(ch>=65 && ch<=90)
		{
			cout<<"Uppercase "<<endl;
			x=ch+32;
			cout<<"converted into lowercase"<<x;
			
			
		}
		else 
		{
			cout<<"lowercase "<<endl;
			x=ch-32;
			cout<<"converted into uppercase"<<x;
		}
   }
		else if((ch>=32 && ch<=47) || (ch>=58 && ch<=64) || (ch>=123 && ch<=126))
		{
			cout<<"special character"<<ch;
		}
		else
		{
			cout<<"number: "<<ch;
		}
   
		

}

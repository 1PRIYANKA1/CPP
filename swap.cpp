#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char n, nn, a;
	cout<<"enter number 1= ";
	cin>>n;
	cout<<"enter number 2= ";
	cin>>nn;
	
	a=n;
	n=nn;
	nn=a;
	
	cout<<"1st number= "<<n<<endl;
	cout<<"2nd number= "<<nn;
	}

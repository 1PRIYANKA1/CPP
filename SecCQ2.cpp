#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int id, h_rent, allowance, tax, basic_salary, home_salary;
	
	cout<<"enter the employee id= ";
	cin>>id;
	cout<<"enter the basic salary= ";
	cin>>basic_salary;
	
	h_rent=basic_salary*10/100;
	allowance=basic_salary*30/100;
	tax=basic_salary*5/100;
	
	home_salary= basic_salary+((h_rent+allowance)-tax);
	cout<<"take home salary is= "<<home_salary;
	
	
}

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int rl, rw, rh, dw, dh, ww, wh, area_of_room, area_of_door, area_of_two_windows, area_painted, area_whitewashed ;
	

	cout<<"enter the length of the room= ";
	cin>>rl;
	cout<<"enter the width of the room= ";
	cin>>rw;
	cout<<"enter the height of the room= ";
	cin>>rh;
	area_of_room=rl*rh;
	
	cout<<"enter the width of the door= ";
	cin>>dw;
	cout<<"enter the height of the door= ";
	cin>>dh;
	area_of_door=dw*dh;
	
	cout<<"enter the width of the window= ";
	cin>>ww;
	cout<<"enter the height of the window= ";
	cin>>wh;
	area_of_two_windows=2*ww*wh;
	
	area_painted= 4*area_of_room-area_of_door-area_of_two_windows;
	cout<<"area of interior walls to be painted= "<<area_painted<<endl;
	
	area_whitewashed= rl*rw;
	cout<<"area to be whitewashed= "<<area_whitewashed;
}

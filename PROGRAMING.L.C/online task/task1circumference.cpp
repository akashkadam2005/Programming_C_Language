#include<iostream>
using namespace std;
int main()
{
	float pi=3.14,radius,area,circumfrance;
	cout<<"enter the value =";
	cin>>radius;
	
	area=pi*radius*radius;
	circumfrance=2*pi*radius;
	
	cout<<"area of circle="<<area;
	cout<<"\ncircumfrence of the circle ="<<circumfrance;
}


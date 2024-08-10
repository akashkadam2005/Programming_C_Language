#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the number 1 =";
	cin>>a;
	cout<<"enter the number 2 =";
	cin>>b;
	cout<<"enter the number 3 =";
	cin>>c;
	
	if(a<b && a<c || a<b&& a>c) 
	{
		cout<<"secound 1 is grater";
	}
	else if(b<a &&b<c || b<a&&b>c)
	{
		cout<<"secound 2 is grater";
	}
	else if(c<a &&c<b || c<a&&c>b)
	{
		cout<<"secound 3 is grater";
	}
	else 
	{
		cout<<"number is same";
	}
	
	
	
	

}

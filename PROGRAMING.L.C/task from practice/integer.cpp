#include<iostream>
using namespace std;

void display(int a,int b)
{
	cout<<"\n integer arguments\n";
	cout<<"\na="<<a<<"\nb="<<b;
}

void display(double a,double b)
{
	cout<<"\n double arguments\n";
	cout<<"\na="<<a<<"\nb="<<b;
}
void display(string a)
{
	cout<<"\n\n String argument";
	cout<<"\na="<<a;
}

int main(){
	
	display(10,11);
	display(2.33,5.11);
	display("ram");
	
}


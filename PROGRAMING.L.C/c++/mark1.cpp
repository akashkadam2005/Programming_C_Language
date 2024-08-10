#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,total=400,per;
	float s=4;
	cout<<"enter marks 1 subject=";
	cin>>a;
	cout<<"enter marks 2 subject=";
	cin>>b;
	cout<<"enter marks 3 subject=";
	cin>>c;
	cout<<"enter marks 4 subject=";
	cin>>d;
	total=a+b+c+d;
	cout<<"total marks of subject="<<total;
	cout<<"\n persentage of marks="<<total/s;
	
	per=total/s;
    if(per>=90&&per<=100)
    {
    	cout<<"\ngrade a";
	}
	else if(per>=70&&per<=90)
	{	
		cout<<"\n grade b";
	}
	else if(per>=50&&per<=35)
	{
		cout<<"\n gread c";
	}
	else if(per>=35&&per<=0)
	{
		cout<<"\n gread fail";
	}
	
}

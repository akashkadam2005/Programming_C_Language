
#include<iostream>
using namespace std;
int main()
{
    int age;
    int i,count=0;  
    cout<<"Enter The Age Of 10 People\n";
 for(i=0;i<10;i++)
    {
        cin>>age;
   
        if((age<=60)&&(age>=40))
         count=count+1;
         else continue;
    }
  cout<<"The Age Between 40 to 60:"<<count;

}


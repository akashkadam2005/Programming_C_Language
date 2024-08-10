#include<iostream>
using namespace std;
int main()
{
    int i, mark[6];
    float sum=0, avg, perc;
    cout<<"Enter Marks obtained in 6 Subjects: ";
    for(i=0; i<6; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    perc = (sum/600)*100;
    cout<<"\nPercentage Marks = "<<perc<<"%";
    

}


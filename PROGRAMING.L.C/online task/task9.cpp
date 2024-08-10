#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, celsius;
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "\nThe temperature in Celsius   : " << celsius ;
    cout << "\nThe temperature in Fahrenheit : " << fahrenheit;
}

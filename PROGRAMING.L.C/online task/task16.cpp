#include <iostream>
using namespace std;
 
void check(char ch)
{
 
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character\n";
 
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character\n";
 
    else
        cout << ch << " is not an alphabetic character\n";
}

int main()
{
    char ch;
 
    ch = 'A';
 
    check(ch);
 
    ch = 'a';
 
    check(ch);
 
    ch = '0';
 
    check(ch);
 
    return 0;
}
 


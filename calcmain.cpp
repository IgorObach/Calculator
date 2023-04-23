#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main ()
{

    int a, b, r;
    char n;
cout<<"Enter first number" <<endl;
cin >>a;

cout<<"Enter second number" <<endl;
cin >>b;

cout<<"Enter function number 0=*, 1=+, 2=/, 3=%" <<endl;
cin >>n;

switch (n)

       {
            case ('*'): r = a*b;
            break;

            case ('+'): r = a+b;
            break;

            case ('/'): r = a/b;
            break;

            case ('%'): r = a % b;
            break;
        }

cout<<"Rezultat"<< r <<endl;

return 0;
}

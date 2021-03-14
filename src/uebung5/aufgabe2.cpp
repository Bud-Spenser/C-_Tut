#include <iostream>
#include <string> 

using namespace std;

int addieren (int a, int b) 
{
    int sum = a+b;
    return sum;
}

void noreturn (int &a,int &b)
{
    a = a+b;
}

void ptr(int *pt1, int *pt2)
{
    *pt1 = *pt1 + *pt2;
}

int main()
{

    int a = 1,b = 2, sum;
    int *x = &a , *y = &b; 
    int &c = a , &d= b;

    sum = addieren(a, b);

    cout << "Erste Summe = " << sum << "\n";

    noreturn(c,d);
    cout << "Summe ist " << a << "\n";
    cout << "Die Zahlen sind " << a << " " << b << "\n" ;

    ptr (x, y);
    cout << "Summe ist " << a << "\n";
    cout << "Die Zahlen sind " << a << " " << b << "\n" ;


}
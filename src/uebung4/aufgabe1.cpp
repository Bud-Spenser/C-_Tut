#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int eingabe, rest, x;
    
    cout << "Bitte geben Sie eine Zahl groesser als 0 ein: ";
    cin >> eingabe;
    cout << "\n";
    x = eingabe;
    
    cout << x << "\n";

    while (x!=1)
    {
        if ((x%2)==0)
        {
            x = x/2;
            cout << x << "\n";
        }
        else
        {
            x = 3*x+1;
            cout << x <<"\n";
        }
    }

}
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string eingabe;
    int zahl1;
    float zahl2;

    cout << "Bitte geben Sie die gewuenschte Art der Berechnung ein: ";
    cin >> eingabe;
    cout << "Bitte geben Sie die erste Zahl ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> zahl2;


    if (eingabe == "*")

    {
        cout << "Das Ergebnis ist: " << zahl1 * zahl2 ;
    }

    else if (eingabe == "/")
    {
        cout << "Das Ergebnis ist: " << zahl1 / zahl2 ;
    }

    else if (eingabe== "+")
    {
        cout << "Das Ergebnis ist: " << zahl1 + zahl2 ;
    }
    
    else if (eingabe== "-")
    {
        cout << "Das Ergebnis ist: " << zahl1 - zahl2 ;
    }
    
    else 
    {
        cout << "Du solltest einen Rechenoperator eingeben.";
    }

}
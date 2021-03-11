#include <iostream>
#include <string>

using namespace std;
int main()
{
    int Zahl1;
    int Zahl2;
    int Multiplikator;

    cout << "Bitte geben Sie die erste Zahl ein: ";
    cin >> Zahl1;

    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> Zahl2;
    
    cout << "Das Ergebnis: " << Zahl1 << " + " << Zahl2 << " = " << Zahl1+Zahl2;
    cout << endl;

    cout << "Geben Sie einen Multiplikator ein: ";
    cin >> Multiplikator;
    cout << endl;
    cout << "Das Ergebnis: " << Zahl1+Zahl2 << " * " << Multiplikator << " = " << (Zahl1+Zahl2)*Multiplikator;

}

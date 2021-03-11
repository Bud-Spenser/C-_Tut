#include <iostream>
#include <string>

using namespace std;
int main()
{
    int Zahl1, Zahl2, Zahl3, Zahl4, Zahl5;
    float Summe, Durchschnitt;


    cout << "Bitte geben Sie die erste Zahl ein: ";
    cin >> Zahl1;
    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> Zahl2;
    cout << "Bitte geben Sie die dritte Zahl ein: ";
    cin >> Zahl3;
    cout << "Bitte geben Sie die vierte Zahl ein: ";
    cin >> Zahl4;
    cout << "Bitte geben Sie die fuenfte Zahl ein: ";
    cin >> Zahl5;
    cout << endl;

    Summe = Zahl1 + Zahl2 + Zahl3 + Zahl4 + Zahl5;
    Durchschnitt = Summe/5;

    cout << "Der Durchschnitt lautet: " << Durchschnitt;


}

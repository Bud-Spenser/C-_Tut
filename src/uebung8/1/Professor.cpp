#include <iostream>
#include "Professor.h"
using namespace std;

Professor::Professor()
{
    cout << "Bitte geben Sie das Gehalt des Professors an: ";
    cin >> mGehalt;
    cout <<"Bitte geben Sie die Fachrichtung an: ";
    cin >> mFachrichtung;
    cout <<"\n";
}

void Professor::arbeiten()
{
    cout << "Der Professor ist am Arbeiten.";
}


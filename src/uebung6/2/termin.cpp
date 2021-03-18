#include <iostream>
#include "datum.h"
#include "termin.h"

using namespace std;

Termin::Termin()
{
    mName="neuer Termin";
}

void Termin::neuerTermin()
{
    cout << "Bitte geben Sie die Werte des neuen Termins (TTMMJJJJ) ein!\n";
    Termin::setName();
    mDatum.setTag();
    mDatum.setMonat();
    mDatum.setJahr();
}

void Termin::setName()
{
    cout << "Bitte geben Sie den Namen des neuen Termins ein: ";
    cin >> mName;
}

void Termin::terminAnzeigen()
{
    cout << "Name: " << mName << "\n";
    cout << "Datum: " << mDatum.getTag() << "." << mDatum.getMonat() << "." << mDatum.getJahr() <<"\n\n";
}

string Termin::getName()
{
    return mName;
}
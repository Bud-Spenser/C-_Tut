#include <iostream>
#include "datum.h"
using namespace std;

Datum::Datum()
{
    mJahr = 0;
    mTag = 0;
    mMonat = 0;
}

void Datum::setTag()
{
    cout <<"Bitte geben Sie den Tag ein: ";
    cin >> mTag;
    cout << "Der Tag wurde gespeichert.\n\n";
}

void Datum::setMonat()
{
    cout <<"Bitte geben Sie den Monat ein: ";
    cin >> mMonat;
    cout << "Der Monat wurde gespeichert.\n\n";
}

void Datum::setJahr()
{
    cout <<"Bitte geben Sie das Jahr ein: ";
    cin >> mJahr;
    cout << "Das Jahr wurde gespeichert.\n\n";
}

int Datum::getJahr()
{
    return mJahr;
}

int Datum::getMonat()
{
    return mMonat;
}

int Datum::getTag()
{
    return mTag;
}

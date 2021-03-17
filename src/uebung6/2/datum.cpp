#include <iostream>
#include <datum.h>
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
    cout << "\nDer Tag wurde gespeichert.\n";
}

void Datum::setMonat()
{
    cout <<"Bitte geben Sie den Monat ein: ";
    cin >> mMonat;
    cout << "\nDer Monat wurde gespeichert.\n";
}

void Datum::setJahr()
{
    cout <<"Bitte geben Sie das Jahr ein: ";
    cin >> mJahr;
    cout << "\nDas Jahr wurde gespeichert.\n";
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

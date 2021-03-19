#include <iostream>
#include "Person.h"
using namespace std;


Person::Person()
{
    cout << "Vorname: ";
    cin >> mVorname;
    cout << "Nachname: ";
    cin >> mNachname;
    cout << "Einkommen: ";
    cin >> mEinkommen;
    mMindeststeuer = 1000;
    mSteuersatz = 0.7;
    Steuerberechnung();
}

void Person::Steuerberechnung()
{
    if ((mEinkommen*mSteuersatz) > mMindeststeuer)
    {
        mSteuern = mEinkommen*mSteuersatz;
    }
    else
    {
        mSteuern = mMindeststeuer;
    }
}    

void Person::getSteuern()
{
    cout << "Name: " << mNachname << " Vorname: " << mVorname << " Steuern: " << mSteuern << "\n";
}

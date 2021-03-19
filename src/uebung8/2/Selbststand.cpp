#include <iostream>
#include "Selbststand.h"

using namespace std;

Selbststaendiger :: Selbststaendiger()
{
    mFreibetrag = 10000;
    Steuerberechnung();
}

void Selbststaendiger::Steuerberechnung()
{
    if (mFreibetrag > mEinkommen)
    {
        mSteuern = 0;
    }
    else 
    {
        mSteuern = (mEinkommen-mFreibetrag)*mSteuersatz;
    }
}

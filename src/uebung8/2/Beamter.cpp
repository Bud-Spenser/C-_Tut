#include <iostream>
#include "Beamter.h"

using namespace std;

Beamter :: Beamter()
{
    mSteuersatz = 0.6;
    mMindeststeuer = 2000;
    Steuerberechnung();
}

void Beamter :: Steuerberechnung()
{
    if ((mEinkommen*mSteuersatz) > mMindeststeuer)
    {
        mSteuern = mEinkommen*mSteuersatz;
    }
    else if (mEinkommen < mMindeststeuer)
    {
        mSteuern = mEinkommen;
    }
    else
    {
        mSteuern = mMindeststeuer;
    }
}    
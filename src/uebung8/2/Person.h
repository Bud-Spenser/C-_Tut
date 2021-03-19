#pragma once
#include <iostream>
using namespace std;

class Person
{
    public:
        Person();
        virtual void Steuerberechnung();
        void getSteuern();

    protected:
        float mEinkommen;
        float mSteuersatz;
        float mSteuern;
        int mMindeststeuer;
        string mVorname;
        string mNachname;
};
#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Selbststaendiger : public Person 
{
    public:
        Selbststaendiger();
        void Steuerberechnung();
    private:
        int mFreibetrag;
};
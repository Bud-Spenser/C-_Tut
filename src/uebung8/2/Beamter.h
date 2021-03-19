#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Beamter : public Person 
{
    public:
        Beamter();
        void Steuerberechnung();
};
#pragma once
#include <iostream>
#include "datum.h"
#include <string>

using namespace std;

class Termin
{
public:
    Termin();
    void neuerTermin();
    void terminAnzeigen();
    void setName();
    string getName();
private:
    Datum mDatum;
    string mName;
};
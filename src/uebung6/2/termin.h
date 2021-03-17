#include <iostream>
#include "datum.h"
#include <string>

using namespace std;

class Termin
{
public:
    Termin::Termin();
    void neuerTermin();
    void termineAnzeigen();
private:
    Datum mDatum;
    string mName;
}
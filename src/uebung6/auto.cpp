#include <iostream>
#include <string>
#include "auto.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

Auto::Auto()
{
    mBaujahr = 0;
    mHersteller = "Default";
    mPreis = 0;
    mModell = "Default";
}

void Auto::print()
{
    cout << "Baujahr: " << mBaujahr << "\n";
    cout << "Hersteller: " << mHersteller << "\n";
    cout << "Preis: " << mPreis << "\n";
    cout << "Modell: " << mModell << "\n";
}

void Auto::setBaujahr(int jahr)
{
    mBaujahr = jahr;
}

int Auto::getPreis()
{
    return mPreis;
}
string Auto::getModell()
{
    return mModell;
}

int Auto::getBaujahr()
{
    return mBaujahr;
}

string Auto::getHersteller()
{
    return mHersteller;
}
   
void Auto::setPreis(int preis)
{
    mPreis = preis;
}
    
void Auto::setModell(string model)
{
    mModell = model;
}

void Auto::setHersteller(string producer)
{
    mHersteller = producer;
}
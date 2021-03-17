#pragma once
#include <iostream>
#include <string>

using std::string;

class Auto
{
public:
    Auto();
    void print();
    int getPreis();
    string getModell();
    int getBaujahr();
    string getHersteller();
    void setPreis(int preis);
    void setModell(string model);
    void setBaujahr(int jahr);
    void setHersteller(string producer);
    
private:
    int mPreis;
    int mBaujahr;
    string mModell;
    string mHersteller;
};
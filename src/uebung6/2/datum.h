#pragma once
#include <iostream>

class Datum
{
public:
    Datum();
    void setTag();
    void setMonat();
    void setJahr();
    int getTag();
    int getMonat();
    int getJahr();
private:
    int mTag;
    int mMonat;
    int mJahr;
};

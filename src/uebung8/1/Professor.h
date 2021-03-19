#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Professor : public Person
{
    public:
        Professor();
        void arbeiten();
    private: 
        int mGehalt;
        string mFachrichtung;
};
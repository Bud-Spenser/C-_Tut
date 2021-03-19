#pragma once
#include <iostream>

using namespace std;

class Person
{
    public: 
        Person();
        void arbeiten();
    protected:
        string mName;
        int mAlter;
};
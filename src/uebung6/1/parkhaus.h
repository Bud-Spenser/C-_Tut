#pragma once
#include <iostream>
#include <string>
#include "auto.h"

class Parkhaus
{
    public: 
    void print();
    void parkCar(Auto car);

    private: 
    Auto parkingCars[10];

};
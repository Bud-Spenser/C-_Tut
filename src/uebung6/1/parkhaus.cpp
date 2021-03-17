#include <iostream>
#include "parkhaus.h"

using std::cout;
using std::string;
using std::endl;

void Parkhaus::print()
{
    for (int i=0 ; i<(sizeof(parkingCars)/sizeof(parkingCars[0])); i++)
    {
        if(parkingCars[i].getBaujahr()==0)
        {
            break;
        }
        else
        {
            cout << "Das Auto " << i << "im Parkhaus hat folgende Kriterien Eigenschaften: \n";
            parkingCars[i].print();
        }
    }
}

void Parkhaus::parkCar(Auto car)
{
   for (int i=0 ; i<(sizeof(parkingCars)/sizeof(parkingCars[0])); i++)
   {
       if (parkingCars[i].getBaujahr()==0)
       {
           parkingCars[i] = car;
           break;
       }
       else if (i==(sizeof(parkingCars)/sizeof(parkingCars[0])-1))
       {
           cout << "Es passt kein Schlitten mehr rein.";
       }
       else
       {
           continue;
       }
   }
}



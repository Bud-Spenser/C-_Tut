#include <iostream>
#include "auto.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Auto auto1;
    auto1.setBaujahr(1995);
    auto1.setHersteller("Ferrari");
    auto1.setModell("Finito");
    auto1.setPreis(5000);
    auto1.print();

    cout << "Preis: " << auto1.getPreis() << "\n";
}
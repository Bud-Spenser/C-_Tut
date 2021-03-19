#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
    cout << "Bitte geben Sie den Namen der Person ein: ";
    cin >> mName;
    cout << "Bitte geben Sie das Alter der Person ein: ";
    cin >> mAlter;
    cout << "\n";
}

void Person::arbeiten()
{
    cout << "Die Person ist am arbeiten.";
}



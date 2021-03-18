#include <iostream>
#include <string>
#include "termin.h"

using namespace std;

int main()
{
    int eingabe,i;
    Termin terminliste [50];
    cout << "Willkommen im Terminplaner :)\n";
    while (eingabe!=3)
    {
        
        cout << "Was wollen Sie machen? \n";
        cout << "1: Termine anzeigen\n2: neuen Termin erstellen\n3: Das Programm beenden\n";
        cout << "Bitte geben sie die passende Zahl ein um fortzufahren und bestaetigen Sie mit ENTER: ";
        cin >> eingabe;
        
        switch (eingabe)
        {
        case 1:
            i = 0;
            while (terminliste[i].getName()!="neuer Termin")
            {
                cout << "Termin " << (i+1) << ": \n";
                terminliste[i].terminAnzeigen();
                i++;
            }
            break;
        case 2:

            i = 0;
            while (terminliste[i].getName()!="neuer Termin")
            {
                i++;
            }

            terminliste[i].neuerTermin();
            break;
        case 3:
            cout << "Das Programm wird beendet.";
            break;       
        default:
            cout << "Bitte geben Sie eine passende Zahl ein!";
            break;
        }
    }
}
#include <iostream>
#include "Person.h"
#include "Beamter.h"
#include "Selbststand.h"
#include <vector>

using namespace std;

int main() 
{
    int eingabe,anzahlSteuerzahler =0;
    vector <Person> personen;
    vector <Selbststaendiger> selbstaendige;
    vector <Beamter> beamte;
    
    cout << "Steuerrechner 2021 - Alles dem Staat\n";
    while (1==1)
    {
        cout << "Was wollen Sie machen? \n1. Neue Person anlegen\n2. Liste aller Personen inkl. Steuern ausgeben\n3. Beenden\nBitte Nummer eingeben: ";
        cin >> eingabe;
        cout << "\n";

        switch (eingabe)
        {
        case 1:
            cout << "Welcher Klasse gehoert die Person an?\n1. normaler Arbeitnehmer\n2. Selbststaendiger\n3. Beamter\n4. Beenden\n";
            cin >> eingabe;
            cout << "\n";
            if (eingabe==1)
            {
                Person x;
                personen.push_back(x);
                anzahlSteuerzahler += 1;
            }
            else if (eingabe==2)
            {
                Selbststaendiger y;
                selbstaendige.push_back(y);
                anzahlSteuerzahler += 1;
            }
            else if (eingabe==3)
            {
                Beamter z;
                beamte.push_back(z);
                anzahlSteuerzahler += 1;
            }
            else if (eingabe == 4)
            {
                cout << "Programm wird beendet.";
                exit(0);
            }
            else
            {
                cout << "Es wurde keine passende Eingabe erkannt.\n";
            }

            break;
        case 2:
            if (anzahlSteuerzahler==0)
            {
                cout << "Es gibt keine steuerpflichtigen Personen.\n\n";
            }
            else
            {
                cout << "Es gibt " << anzahlSteuerzahler << " Steuerzahler:\n";
                for (int i=0; i<personen.size(); i++)
                {
                    personen[i].getSteuern();
                }
                for (int i=0; i<beamte.size(); i++)
                {
                    beamte[i].getSteuern();
                }
                for (int i=0; i<selbstaendige.size(); i++)
                {
                    selbstaendige[i].getSteuern();
                }
                cout << "\n";
            }
            break;
        case 3:
            cout << "Programm wird beendet.";
            exit(0);

        default:
            cout << "Es wurde keine gültige Eingabe erkannt.\n";
            break;
        }
    }
}
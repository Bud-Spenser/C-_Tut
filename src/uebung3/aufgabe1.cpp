#include <iostream>
#include <string>

using namespace std;
int main()
{
    int anzahl;
    float durchschnitt, summe;

    cout << "Bitte geben Sie die Anzahl der Zahlen ein: ";
    cin >> anzahl;

    int array[anzahl];

    for (int i=0; i < anzahl; i++)
    {
        cout << "Bitte Zahl " << i << " eingeben: ";
        cin >> array[i];
    }

    for (int i=0; i < anzahl; i++)
    {
        summe += array[i];
    }

    durchschnitt = summe/anzahl;
    cout << "Der Durchschnitt betraegt: " << durchschnitt;

}
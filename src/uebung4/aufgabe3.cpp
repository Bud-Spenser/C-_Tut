#include <iostream>
#include <string>

int test_schaltjahr(int jahr)
{
    if (jahr%4==0)
    {
        if (jahr%100==0)
        {
            if (jahr%400==0)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}


using namespace std;
int main()
{
    int eingabe,ausgabe;
    cout << "Bitte geben Sie eine Jahreszahl ein: ";
    cin >> eingabe;

    ausgabe=test_schaltjahr(eingabe);
    if (ausgabe==0)
    {
        cout << "Es handelt sich um kein Schaltjahr!";
    }
    else
    {
        cout << "Es handelt sich um ein Schaltjahr!";
    }
}

#include <iostream>
#include <string>

using namespace std;

char swap (char a)
{
    char b;
    int x = a;
    if (x > 64 && x < 91)
    {
        b = x + 32;
        return b;
    }
    else if (x > 96 && x < 123)
    {
        b = x - 32;
        return b;
    }
    else
    {
        cout << "Es wurde weder Gross- noch Kleinbuchstabe eingegeben.";
        return 0;
    }
}

int main()
{
    char eingabe, ausgabe;
    

    cout << "Bitte geben Sie einen Klein- oder Grossbuchstaben ein: ";
    cin >> eingabe;

    ausgabe=  swap (eingabe);

    if (ausgabe==0)
    {
        exit;
    }
    else
    {
        cout << "Der geaenderte Wert ist: " << ausgabe;
    }
    

}
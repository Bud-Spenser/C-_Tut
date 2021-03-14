#include <iostream>
using namespace std;

int LaengeString(const char* Eingabe);
char* WortUmdreher(const char* Eingabe);

int main()
{
	cout << "Geben Sie ein Wort ein:";
	string Eingabe;
	cin >> Eingabe;

	string WortUmgedreht = WortUmdreher(Eingabe.c_str());

	cout << "Wort vorwaerts:" << Eingabe.c_str() << endl;
	cout << "Wort Rueckwaerts:" << WortUmgedreht << endl;

	if (Eingabe == WortUmgedreht)
		cout << "Wort ist ein Palindrom.";
	else
		cout << "Wort ist kein Palindrom.";
        
}


char* WortUmdreher(const char* Eingabe)
{
	char *Ergebnis = new char[LaengeString(Eingabe) + 1];

	for (int i = 0; i < LaengeString(Eingabe); i++)
	{
		*(Ergebnis + i) = Eingabe[LaengeString(Eingabe) - 1 - i];
	}

	*(Ergebnis + LaengeString(Eingabe)) = '\0';

	return Ergebnis;
}


int LaengeString(const char* Eingabe)
{
	int Ergebnis = 0;
	
	while (*(Eingabe + Ergebnis) != '\0')
	{
		Ergebnis++;
	}

	return Ergebnis;
}

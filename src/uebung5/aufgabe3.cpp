#include <iostream>
#include <string> 

using namespace std;

int LaengeString(const char* Eingabe)
{
	int Ergebnis = 0;
    //c.str() gives a pointer to an array that contains a null-terminated 
    //sequence of characters (i.e., a C-string) representing the current value of the string object.

	while (*(Eingabe + Ergebnis) != '\0')
	{
		Ergebnis++;
	}

	return Ergebnis;
}

int main()
{
	cout << "Geben Sie ein Wort ein:";
	string Eingabe;
	cin >> Eingabe;

	cout << "Das Wort ist: " << LaengeString(Eingabe.c_str()) << " Buchstaben lang.\n";
    cout << "Das Wort ist: " << Eingabe.length() << " Buchstaben lang.";

}

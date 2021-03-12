#include <iostream>
#include <string>

using namespace std;
int main()
{
    int zahl1;
    cout << "Bitte geben Sie die Zahl, bis zu der Fizzbuzz gespielt werden soll: ";
    cin >> zahl1;
    cout << "\n";

    for (int i=0; i < (zahl1+1); i++)
    {
        if (i<3)
        {
            cout << i << " ";
        }
        else
        {
            if ((i%3==0) && (i%5==0))
            {
                cout << "fizzbuzz\n";
            }
            else if (i%3==0)
            {
                cout <<"fizz ";
            }
            else if (i%5==0)
            {
                cout <<"buzz\n";
            }
            else 
            {
                cout << i << " ";
            }
        }   
    }
}
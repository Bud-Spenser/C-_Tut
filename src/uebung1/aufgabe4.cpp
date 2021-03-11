#include <iostream>
#include <string>

using namespace std;
int main()
{
    
    float radius, umfang, flaecheninhalt;
    float pi = 3.141;

    cout << "Bitte geben Sie den Radius des Kreises ein: ";
    cin >> radius;
    
    umfang = 2*pi*radius;
    flaecheninhalt = 2*pi*radius*radius;
    
    cout << "Der Flaecheninhalt betraegt: " << flaecheninhalt << endl;
    cout << "Der Umfang betraegt: " << umfang;

}





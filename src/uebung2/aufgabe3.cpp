#include <iostream>
#include <string>

using namespace std;
int main()
{
    int zahl;
    int pruef;

    cout << "Geben Sie eine natuerliche Zahl ein: ";
    cin >> zahl;

    pruef = zahl%2;
    
    if (pruef == 0)
    {
        cout << "Die Zahl ist gerade."<< "\n";
    }
    else
    {
        cout << "Die Zahl ist ungerade."<< "\n";
    }
}

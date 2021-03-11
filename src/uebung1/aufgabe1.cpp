#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstName;
    string lastName;

    cout << "Bitte geben Sie Ihren Vornamen ein: " ;
    cin >> firstName;

    cout << "Bitte geben Sie Ihren Nachnamen ein: " ;
    cin >> lastName;

    cout << "Ihr Name ist " << firstName << " " << lastName;

}
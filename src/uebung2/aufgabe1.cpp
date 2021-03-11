#include <iostream>
#include <string>

using namespace std;
int main()
{
    bool A = true;
    bool B = true;
    bool C = false;
    bool D = false;

    cout << (A || B || C || D ) << "\n";
    cout << ( A && B && C && D ) << "\n";
    cout << (!C && !D) << "\n";
    cout << (!((A && B) || (B && !C)) || !(C && D)) << "\n";
    cout << (!(!((A && !D) && (B || C)))) << "\n";

}
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int A = 5;
    int B = 8;
    int &C =B;
    int *D = &A;
    C = 34;
    *D +=12;
    A = C + (*D);
    (*D)= (B);
}
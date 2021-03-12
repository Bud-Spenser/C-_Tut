#include <iostream>
#include <string>

using namespace std; 
int main ()
{
    for (int i=0; i < 100 ; i++)
    {
        if (i < 10)
        {
            cout << " " << i << " ";
        }
        else
        {
            if((i%10)==0)
            {
                cout << "\n" << i << " ";
            }
            else
            {
                cout << i << " ";
            } 
        }
        
    }

}
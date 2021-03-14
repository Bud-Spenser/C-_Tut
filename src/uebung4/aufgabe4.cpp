#include <iostream>
#include <string>

using namespace std;

int swap(int a, int b)
{
    int swapper;
    swapper = a;
    a = b;
    b = swapper;
    return a,b;
}

int main()
{
    int n;
    cout << "Bitte geben Sie die Größe des Arrays ein: ";
    cin >> n;
    int arr[n];
    int swapper;

    for (int i=0; i < n ; i++)
    {
        cout << "Bitte geben Sie die " << i << "te Zahl ein: ";
        cin >> arr[i];
    }

    for (int i=0; i < n-1; i++)
    {
        //after i iterations, the last i numbers are already in place. so each 
        // top level iteration causes one less iteration in this bottom level
        for (int j=0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swapper = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= swapper;
            }
            else
            {
                continue;
            }
        }

        for (int y=0; y < n; y++)
        {
            cout << arr[y] << " ";
        }
        cout << "\n";
    }
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cout << "Specify the range of the array: ";
    cin >>n;
    int pom;
    int k;
    int minRange, maxRange;

    // User provides the range of generated numbers
    cout << "Enter the range of generated numbers (min-max): ";
    cin >> minRange >> maxRange;
    cout <<"Generated array: "<<endl;

    int T[n];

    srand(time(NULL));

    // Generating and displaying an array of random numbers within the specified range
    for (int i = 0; i < n; i++)
    {
        // Generating a random number within the specified range
        T[i] = minRange + rand() % (maxRange - minRange + 1);
        cout << T[i] << "  ";
    }

    // Insertion sort
    for (int i = 1; i < n; i++)
    {
        pom = T[i];
        for (k = i - 1; k >= 0 && T[k] > pom; k--)
        {
            T[k + 1] = T[k];
        }
        T[k + 1] = pom;
    }

    // Displaying the sorted array
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << T[i] << "  ";
    }

    return 0;
}


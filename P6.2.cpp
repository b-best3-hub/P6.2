/*
File: P6.2
Author: Ben Best
Date: 2026-02-26

Description: Diamond for number of asterisks per side
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int r = 0;       // Diamond row counter
    int s = 0;       // Diamond space counter
    int star = 0;    // Diamond star counter

    cout << "Enter number of asterisks per side: ";
    cin >> n;

    if (n < 2)
    {
        cout << "n must be at least 2." << endl;
        return 0;
    }

    // Top half and middle of diamond
    for (r = 1; r <= n; r++)
    {
        //Spaces
        for (s = 1; s <= n - r; s++)
        {
            cout << " ";
        }

        //Stars
        for (star = 1; star <= (2 * i - 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half of diamond
    for (r = n - 1; r >= 1; r--)
    {
        //Spaces
        for (s = 1; s <= n - r; s++)
        {
            cout << " ";
        }

        //Stars
        for (star = 1; star <= (2 * r - 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/*
Program No: DSA_023
Program Title: First repeating element
Concept: array, traversal
DIfficulty: easy
Author: SUdheer Pathak
Date: 12-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter size";
    cin >> n;

    vector <int> arr(n);

    if ( n < 2)
    {
        cout << "Enter valid array size";
        return 0;
    }

    for ( i = 0; i < n; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }

    bool found = false;

    for ( i = 0; i < n; i ++ )
    {
        for ( j = i + 1; j < n; j++)
        {

        if ( arr[i] == arr[j])
        {
            cout << "duplicate found : " << arr [i];
            found = true;
            break;
        }

        }

    }
    if (!found)
    {
        cout << "No duplicate found"  << endl; 
    }

        return 0;
}
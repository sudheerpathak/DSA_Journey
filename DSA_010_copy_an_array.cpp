/*
Program No: DSA_010
Program Title: Copy an array
Concept: Array
Difficulty:Easy
Author: Sudheer Pathak
Date: 09-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int i, n;

    cout << "Enter the length of an array : ";
    cin >> n;
    
    int array[n];

    for (i = 0; i < n; i++)
    {
        cout << " \n enter the value of an array : ";
        cin >> array[i];
    }

    int sp[n];
    
    for( i = 0; i < n; i++)
    {
        sp[i] = array [i];
    }

    for ( i = 0; i < n; i++)
    {
        cout << sp [i] << " ";
    }

    return 0;
}
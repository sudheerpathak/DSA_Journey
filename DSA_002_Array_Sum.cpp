/*
Program No: DSA_002
Program Title: array sum
Concept Arraay, for loop
Difficulty: Eassy
Author : Sudheer Pathak
Date: 08-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
    int i, n, x=0;
    
    cout << "Enter the value of n:";
    cin >> n;
    int array[n];


    for(i = 0; i < n; i++)
    {
        cout << "Enter the value of array: ";
        cin >> array[i];

        x = x + array[i];
    
    }

    cout << "The sum of array is :" << x << " ";
    
    return 0;
}
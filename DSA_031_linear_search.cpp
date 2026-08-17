/*
Program No: DSA_031
Program Title: Given an array and a target, 
find whether the target exists and, 
if it does, return its position.
Concept : Linear Search
Diificulty: easy
Author: sudheer pathak
Date: 16-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter size:";
    cin >> n;

    vector <int> arr(n);

    for( i = 0; i < n; i++)
    {
        cout << "Enter value : ";
        cin >> arr[i];
    }

    int target ;

    cout <<"enter target";
    cin >> target;
    
    bool found =false;
    for( i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            found = true;
            cout << "\n Element found at index" << i ;
            break;
        }
    }

    if (!found)
    {
        cout << "\n no matching number found";
    }

    return 0;
}
/*
Program No:DSA_014_01
Program title: sort array in descending order
Concept : Sorting, STL sort()
Difficulty: Easy
Author: sudheer Pathak
Date: 10-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter the size:";
    cin >> n;

    vector <int>arr(n);
    

    for (i = 0; i < n; i++)
    {
        cout << " enter the value for array :";
        cin >> arr[i];
    }
    
    sort (arr.begin(), arr.end(), greater<int>());

    cout << "reverse array"<< endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;

}
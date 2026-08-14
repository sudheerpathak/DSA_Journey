/*
Program No:DSA_029
Program Title: Find union of two array
Concept: Array, Nested Loop, Linear Search, Duplicate Handling
Difficulty: Easy
Author: sudheer Pathak
Date: 14-08-2026
*/

#include<iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n, m, k =0, l=0;

    cout << "Enter size of array 1 : ";
    cin >> n;

    vector <int> arr1(n);

    for (i = 0 ; i < n; i ++)
    {
        cout << "enter the value : ";
        cin >> arr1[i];
    }

    cout << "Enter size of array 2 : ";
    cin >> m;

    vector <int> arr2(m);

    for (i = 0 ; i < m; i ++)
    {
        cout << "enter the value : ";
        cin >> arr2[i];
    }


 vector<int> result(n + m);

  // Process first array
    for (i = 0; i < n; i++)
    {
        bool found = false;

        // Search whether arr1[i] is already in result
        for (j = 0; j < k; j++)
        {
            if (result[j] == arr1[i])
            {
                found = true;
                break;
            }
        }

        // If not found, add it
        if (!found)
        {
            result[k] = arr1[i];
            k++;
        }
    }

    // Process second array
    for (i = 0; i < m; i++)
    {
        bool found = false;

        // Search whether arr2[i] is already in result
        for (j = 0; j < k; j++)
        {
            if (result[j] == arr2[i])
            {
                found = true;
                break;
            }
        }

        // If not found, add it
        if (!found)
        {
            result[k] = arr2[i];
            k++;
        }
    }

    // Print union
    cout << "\nUnion of two arrays: ";

    for (i = 0; i < k; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
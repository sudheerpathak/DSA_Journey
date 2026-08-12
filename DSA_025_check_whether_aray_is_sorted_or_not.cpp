/*
Program No: DSA_025
Program Title: Check whether array is sorted or not in ascending order
Cooncept: Array traversal ,Comparison, Boolean flag
Difficulty: easy
Author: Sudheer Pathak
Date: 12-08-206
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;

    cout << "enter size :";
    cin >> n;

    if ( n < 2)
    {
        cout << " Enter valid array size ";
        return 0;
    }

    vector <int> arr(n);

    for ( i = 0; i < n ; i ++)
    {
        cout << " enter the value  in array : ";
        cin >> arr [i];
    }

    bool sorted = false;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr [i-1])
            {
                sorted = false;
                break;
            }

    }
        if (sorted)
        {
            cout << "\n  array is sorted" ;
        }
        else 
        {
             cout << "\n array is not sorted";
        }
    

 return 0;
}
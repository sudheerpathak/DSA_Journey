/*
Program No: DSA_017
Program Title: Move all zeroes to end 
Concept: Sort, Array, searching
Difficulty: easy
Author: sudheer pathak
Date : 11-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{
    int i, n;

    cout << "Enter size";
    cin >> n;

    vector <int> arr(n);

    for ( i = 0; i < n; i ++)
    {
        cout << "Enter the value for array:";
        cin >> arr[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
    }

    int j = 0;

    for (i = 0; i < n; i ++)
    {
        if(arr[i]!=0)
        {   
            
            arr[j] = arr [i];  
            j++;

        }
    }
    
    while (j<n)
    {
        arr[j] = 0;
        j++;
    }

    cout << "/n the final array is :";
    
for (i =0; i < n; i++)
{
    cout << arr[i] << " ";
}   
    return 0;
}

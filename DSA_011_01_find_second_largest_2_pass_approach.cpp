/*
Program No: DSA_011
Program title: Find the second largest element
COncept:Two pass approach( Array, for loop, searching) 
Difficulty:Easy
Author: sudheer Pathak
Date-10-08-2026
*/
#include <iostream>
#include <vector>

using namespace std;

int main()

{

    int i, n;

    cout << "Enter the size :";
    cin >>n;

    vector <int>arr(n);

    for (i = 0; i < n; i++)
    {
        cout << "Enter the value for array :";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
    }

    int largest = arr[0];
    int sec_largest = arr [0];

    for (i = 0; i < n ; i++)
    {
       if( largest < arr[i])
       {
        largest = arr [i];
       }
    }

    for (i = 0; i < n; i++ )
    {
        if (arr[i] < largest)
        {
            if (sec_largest < arr [i])
            {
                sec_largest = arr [i];
            }
        }
    }


    cout << " the largest number is : "<< largest << endl ;
    cout << " the second largest number is : "<< sec_largest << endl ;

    return 0;
}

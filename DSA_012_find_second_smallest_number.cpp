/*
Program No: DSA_012
Program Title: Find second smallest number (one pass approach)
Concept: One pass traversal , array, minimum tracking
Difficulty: Easy
Author: Sudheer pathak
Date: 10-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter the length of array";
    cin >> n;

    if (n < 2)
    {
        cout << "Array must contain atleast 2 elements";
        return 0;
    }

    vector <int>arr(n);

    for (i = 0; i < n; i++)
    {
        cout << "\n enter the value in array : ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i]<< " " ;       
    }

    bool foundSecond = false;

    int smallest = arr [0];
    int sec_smallest = arr [0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            sec_smallest = smallest;
            smallest = arr[i];
            foundSecond = true;
        }

        else if ( arr[i] > smallest)
        {
             if (!foundSecond || arr[i] < sec_smallest )
             {
            sec_smallest = arr[i];
            foundSecond = true;
             }
        }

     

    }
     cout << " \n The smallest number is :" << smallest<< endl;

    if (foundSecond)
    {
        cout << "\n The second smallest is :"<< sec_smallest <<endl;
    }
    else 
    {
        cout << "their is no distinct smaller value" << endl;
    }

}
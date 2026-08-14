/*
Program NO: DSA_027
Program Title: Find Pair With Given Sum
Concept : Array, Nested Loop, Brute Force
Difficulty: easy
Author : sudheer pathak
Date:14-08-2026
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{

    int i, j, n;
    int target;

    cout <<"Enter size :";
    cin >> n;

    if (n <2)
    {
        cout << " enter valid number";
        return 0;
    }

    vector <int> arr(n);

    for ( i =0; i < n; i++)
    {
        cout << " Enter the value:";
        cin >> arr[i];
    }
cout << "Enter target sum : ";
cin >> target;
bool found = false;

    for ( i = 0; i < n; i++)
    {
        for ( j = i +1; j < n; j++)
        {
            if (target == arr[i] + arr [j])
            {
            cout << "Pair found: "<< arr[i] << " + " << arr[j] << " = " << target << endl;
            cout << "Indices: " << i << " and " << j << endl;
            found = true;
            break;
            }
        }

        if(found)
        {
            break;
        }
    }

    if (!found)
    {
        cout <<" There is no suitable match";
    }

    return 0;
}

/*
Time Complexity: O(n²)
Space Complexity: O(1) auxiliary
*/
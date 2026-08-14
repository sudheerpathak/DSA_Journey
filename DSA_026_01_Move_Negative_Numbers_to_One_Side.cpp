/*
Program No: DSA_026
Program Title: MOve negative number to one side by keeping the relative order same
Concept: Array, pushback(), partitoning
Difficulty: easy
Author:Sudheer Pathak
Date: 14-08-2026
*/
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int i, j = 0, n;

    cout << "Enter size";
    cin >> n;

    vector <int>arr(n);

    for ( i = 0; i < n; i ++)

    {
        cout << "Enter the value :";
        cin >> arr[i];
    }

    vector<int> result;

    for ( i = 0; i < n; i++)
    {
        if ( arr [i] < 0)
        {
            result.push_back(arr[i]);
        }
    }

 for ( i = 0; i < n; i++)
    {
        if ( arr [i] >= 0)
        {
            result.push_back(arr[i]);
        }
    }

    arr = result;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Stable partition
Time Complexity: O(n)
Space Complexity: O(n)extra space
*/
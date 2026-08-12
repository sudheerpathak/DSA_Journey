/*
Program No: DSA_021
Program Title: find the missing number
Concept:array, search, sort, summation
Difficulty: easy
Author:sudheer pathak
date: 12-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n, d, exact_sum =0, actual_sum, miss_num;

    cout << "Enter size";
    cin >> n;

    vector <int> arr(n);

    for (i = 0; i < n; i++)
    {
        cout << "Enter the number :";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
        exact_sum += arr[i]; 
    }

    d = arr [1] - arr[0];

    int a = arr[0];

    actual_sum = n*(2*a + (n-1)*d)/2;

    miss_num = actual_sum - exact_sum;

    cout << "The missing number is :" << miss_num << endl;

    return 0;

}
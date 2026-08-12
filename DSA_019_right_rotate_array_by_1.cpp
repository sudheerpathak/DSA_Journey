/*
Program No: DSA_019
Proogram Title: right rotate array by 1
Concept: Array, traversal, in place manipulation
Difficulty: Easy
Author: sudheer Pathak
Date: 11-08-2026
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter size:";
    cin >> n;

    vector <int>arr(n);

    for( i = 0; i < n; i++)
    {
        cout << "Enter the value for an array :";
        cin >> arr[i] ;
    }

    int temp = arr[n-1];

    for (i = n-1; i >0; i--)
    {
        arr[i] = arr [i-1];
    }

    arr[0] = temp;

cout << "\n Final array is :";

    for( i =0 ;i < n; i++)
    {
        cout << arr[i] << " ";   
    }

    return 0;
}
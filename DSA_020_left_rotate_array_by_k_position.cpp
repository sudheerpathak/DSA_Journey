/*
Program NO: DSA_020
Program Title: left rotate array by K positon
Concept: Array, Traversal, in place manipulation
Difficulty: Easy
Author: Sudheer Pathak
DAte : 11-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int i, n ,k, z =0;

    cout << "Enter size:";
    cin >> n;

    vector <int> arr(n);
    
    for (i = 0; i < n; i++)
    {
        cout << "enter the value for array: ";
        cin >> arr[i];
    }

        cout << " enter the value for which it has to shift";
        cin >> k;

    vector <int> neww(k);

     for ( i = 0; i < k; i ++)
     {
        neww[i] = arr[i];
     }
     
    for (i  = 0; i < n - k; i++)
    {
        arr[i] = arr [i + k];
    }

    for (i = n- k ; i < n; i++)
    {
        arr[i] = neww [z];
         z++;
    }

    cout << "Final traversal by one place to the left is :";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}
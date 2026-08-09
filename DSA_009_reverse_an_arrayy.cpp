/*
Program No: DSA_009
Program Title: Reverse an array
concept:array, for loop
Difficulty: Easy
Author: Sudheer pathak
date: 09-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()

{
    int i, n, temp =0 ;

    cout << "Enter the length of array : ";
    cin >> n;
    
    vector <int> arr(n);

    for (i =0 ; i< n; i++)
    {
        cout << " Enter the value for an array : ";
        cin >> arr[i];
    }

    cout << "Reverse array is :";

    for (i = 0; i < n/2; i++)
    {
        temp = arr[i] ;
        arr[i] = arr [(n-i-1)];
        arr[(n-i-1)] = temp;
        
    }
    
    for (i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
    }

    return 0;
}
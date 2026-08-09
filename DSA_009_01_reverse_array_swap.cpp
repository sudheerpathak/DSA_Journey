/*
Program No: DSA_009_01
Program Title: reverse an array through swap function
concept: swap , aray, for loop
Difficulty:Easy
Author: sudheer pathak
Date :09-08-206
*/

#include<iostream>
#include <vector>

using namespace std;

int main()
{

    int i, n;

    cout << "Enter size :" ;
    cin >> n;

    vector <int> arr(n);
    
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value of array";
        cin >> arr[i];
    }

    for (i =0; i < n/2; i++)
    {
        swap (arr[i], arr[n-i-1]);
    }

    for (i=0 ; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
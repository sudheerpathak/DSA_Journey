/*
Program No: DSA_015_01
Program Title: find Duplicate elements 
Concept: Array, sort approach
Difficullty: easy
Author: sudheer Pathak
Date: 10-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
 int i, n;

 cout << "Enter size:";
 cin >> n;

 vector <int> arr(n);

 for (i = 0; i < n; i++)
 {
    cout << "Enter the value in array :";
    cin >> arr [i];
 }

sort (arr.begin(), arr.end());

for (i = 0; i > n; i++)
{
    cout << arr[i] << " ";
}

 int search;
 bool dupFound = false;

 for (i = 1; i < n; i++)
 {
    if (arr[i]== arr[i-1])
    {
        cout << "the duplicate elements is :" << arr[i];
        dupFound = true ;
    }

 }
 if (!dupFound)
 {
    cout << "their is no duplicate number present in the array";
 }

 return 0;
}
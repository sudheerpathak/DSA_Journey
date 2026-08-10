/*
Program No: DSA_015
Program Title: find Duplicate elements
Concept: Array, sorting
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
 int i, n, j;

 cout << "Enter size:";
 cin >> n;

 vector <int> arr(n);

 for (i = 0; i < n; i++)
 {
    cout << "Enter the value in array :";
    cin >> arr [i];
 }


 int search;
 bool dupFound = false;

 for (i = 0; i < n; i++)
 {
    search = arr[i];

    for (j = i+1; j < n; j++)
    {
         if(search==arr[j])
        {
            cout << "Duplicate numbers are :" << search<< endl;
            dupFound=true;
            
        }
        else
        {
            continue;
        }
    
    }
 }

 if(!dupFound)
 {
    cout << "Their is no duplicate number in the array";
 }

 return 0;

}

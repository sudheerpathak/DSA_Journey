/*
Proogram No: DSA_014
Program Title : sort ascending order
Concept: sorting
Difficulty: Easy
Author: Sudheer Pathak
Date : 10-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{
    int i, n;

    cout << "Enter the size: ";
    cin >> n;

    vector <int> arr(n);
    for (i = 0; i < n; i++)
    {
        cout << " enter the value in array";
        cin >> arr[i];
    }
    
   
    sort(arr.begin(), arr.end());
    
    for(i =0; i<n; i++)
    {
    cout << arr[i] << " ";
    }   
  return 0;     

}
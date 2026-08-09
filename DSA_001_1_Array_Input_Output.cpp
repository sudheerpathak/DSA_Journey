/* 
Program No: DSA_001_1
Program Title: Array Input output 
Concept: use of array
Difficulty: Easy
Author: sudheer Pathak
Date: 07-8-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter the number of memory allocation in array";
    cin >> n;
    vector<int> arr[n];

    
    
    for(int i=0; i<n; i++)
    {
        cout << "enter the value in array : ";
        cin >> arr[i];

    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
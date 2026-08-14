/*
Program No: DSA_030
Program title: Binary search
Concept: Array, Binary Search, Divide and Conquer
Difficulty:easy
Author: sudheer pathak
Date: 14-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{
    int i, n;
    int target;

    cout << "enter size";
    cin >> n;

    vector<int> arr(n);

      for (i =0; i < n; i++)
    {
        cout << "Enter the value : ";
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    for(i =0; i<n; i++)
    {
    cout << arr[i] << " ";
    }   

cout << "set target : ";
cin >> target;
    
int left = 0;
int right = n-1;   
bool found = false;
    

while (left <= right)  
{

int mid = left + (right - left) /2;
       
        
        if (arr[mid] == target)
        {
            cout << "target found : " << mid << " "<< arr[mid];
            found = true;
            break;
        }

       else if(target > arr[mid] )
        {
            left = mid + 1;
        }
        else 
        {
            right = mid -1;
        }
    }

    return 0;
}

/*
overall complexity is O(n log n)
*/
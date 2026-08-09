/*
Program No: DSA_007
Program Title: search an elemnt
Concept: Array
Difficulty: Easy
Author : SUdheer Pathak
Date : 09-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()

{
int i, n, element;

cout << "Enter the length of array : ";
cin >> n;

vector <int> arr(n);

//Input
for(i = 0; i < n; i++)
{
    cout << "Enter the values for array";
    cin >> arr[i];
}

// DIsplay
for (i=0 ;i <n; i++)
{
    cout << arr[i]<< " ";

}

cout << " \n Enter the element to search : ";
cin >> element;

bool found = false;

// Linear Search
for (i = 0; i < n; i++)
{
    if ( arr[i] == element)
    {
        cout << "Element found at index " << i << endl;
        found =true;
        break;       
    }       
}

if (!found)

{
cout << "element not found "<< endl;
}

return 0;

}
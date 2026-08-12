/*
Program NO: DSA_016
Program Title: Remove duplicates from sorted array
Concept: Sort, two pointer technique
Difficulty: Easy
Author: Sudheer Pathak
DAte: 10-08-2026
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
    bool found= false;
    vector <int> arr(n);

    for(i =0; i<n; i++)
    {
        cout << "enter the value in array :";
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "The sorted array is" <<endl;;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    int j = 0;

    for ( i = 1; i < n; i ++)
    {
        if(arr[i] != arr[j])
        {
            j++;
            arr [j] = arr [i];
        }
    }

    
cout << "Final array" ;

for (i = 0; i < j+1; i++)
{
    cout << arr[i] << " ";
}

return 0;
}

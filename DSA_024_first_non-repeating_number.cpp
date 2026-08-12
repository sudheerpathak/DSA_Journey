/*
Program No: DSA_024
Program Title: First non repeating number
Concept: Array, traversal, searching
Difficulty: Easy
Author: SUdheer Pathak
Date: 12-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;
    

    cout << " Enter size:";
    cin >> n;

    if (n < 2)
    {
        cout << "Enter valid array size";
        return 0;
    }

    vector <int> arr(n);
    
    for(i = 0; i < n; i++)
    {
        cout << "Enter the value in array : ";
        cin >> arr[i];
    }

    bool found = false;

    for (i = 0; i < n; i++)
    {
        int count =0;

        for ( j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count ++;
            }
        
        }

                     
        if (count == 1)
        {
         cout << "First non repeating number is : " << arr[i]<< endl;
         found =true;
         break;
        }       
    }

    if(!found)
    {
        cout << "NO non repeating number is found ";
    }

    return 0;
}

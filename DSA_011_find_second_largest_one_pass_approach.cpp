/*
Program No: DSA_011
Program Title: find second largest number 
Concept: one pass approach
Difficulty:easy
Author: Sudheer pathak
date: 10-08-206
*/

#include <iostream>
#include <vector> 

using namespace std;

int main()

{

    int i, n;

    cout << "Enter the size: ";
    cin >> n;

    if (n < 2)
    {
        cout << " Atleast two elements are required ";
        return 0;
    }
    vector <int> arr(n);

    for (i = 0; i < n; i++)
    {
        cout << "Enter the value for an array :";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] <<  " ";
    }

    int largest = arr[0];
    int sec_largest = 0;

    bool foundSecond = false;

    for (i = 1; i < n; i++)
    {         
       if ( arr [i] > largest)
        {
           
        sec_largest = largest;
        largest = arr[i];  
        foundSecond = true;          
                               
        }

        else if (arr [i] < largest)
        {
            if (!foundSecond || arr[i] > sec_largest)
            {
                sec_largest = arr [i];
                foundSecond =true;
            }
        }
        
        
    }
 cout << "\n the largest value is :" << largest << endl;

 if (foundSecond)
 {
 cout << " \n the second largest value is :" << sec_largest << endl;
 }
else
{
    cout << "There is no distinct large value" << endl;
}

 return 0;
}
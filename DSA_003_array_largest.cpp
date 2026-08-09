/*
Program No: DSA_003
Program TitleL Array largest
Concept: Array, for loop
Difficulty: Easy
Author: Sudheer Pathak
Date:09-08-2026
*/

#include <iostream>

using namespace std;

int main()
{
    int i, n, largest=0;
    

    cout << " enter the length of array";
    cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        cout << "Enter the values in array " ;
        cin >> array[i]; 
    }
    
    for(i =0; i<n; i++)
    {
        cout << array [i]<< " ";
    }

    for (i=0; i<n; i++)
    {   
        if (array[i]>= largest)
        {
        largest = array [i];
        }
    }
    cout << "\n largest number is :" << largest;

    return 0;

}
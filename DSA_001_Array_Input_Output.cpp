/* 
Program No: DSA_P_01
Program Title: Array Input output 
Concept: use of array
Difficulty: Easy
Author: sudheer Pathak
Date: 07-8-2026
*/

#include <iostream>

using namespace std;

int main()
{
    int array[5];

    
    
    for(int i=0; i<5; i++)
    {
        cout << "enter the value in array : ";
        cin >> array[i];

    }

    for(int i=0; i<5; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
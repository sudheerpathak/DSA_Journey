/*
Program No: DSA_013
Program title: Reversing an array
concept: 2 pointer method
Difficulty: easy
Author: sudheer pathak
Date: 10-08-2026
*/

#include <iostream>
#include <algorithm> //for std swap

using namespace std;

void reverseArray(int arr[], int size)
{
    int left = 0; //pointer at the start
    int right = size -1; // pointer at the end

    //Loop until the two pointers meet or cross each other

    while (left < right)
    {
        // swap the elements at the left and right positions

        swap (arr[left],arr[right]);

        //move the pointers towards the center

        left ++;
        right --;

    }

}

int main ()

{
    int arr[] = {10, 20,30, 40, 50};

    int size = sizeof (arr) / sizeof (arr[0]);

    cout << "Original Array :";

    for (int i = 0; i < size; i++)
    {
        cout << arr [i] << " ";
        cout << "\n";
    }

    //Reverse the array using the two pointer method

    reverseArray(arr, size);

    cout << "reversed Array:";

    for (int i =0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}

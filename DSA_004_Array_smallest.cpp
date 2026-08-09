/*
Program No: DSA_004
Program TitleL Array smallest
Concept: Array, for loop
Difficulty: Easy
Author: Sudheer Pathak
Date:09-08-2026
*/

#include <iostream>

using namespace std;

int main()
{
int i, n, smallest;

cout << "Enter thhe length of Array";
cin >> n;

int array[n];

for (i = 0; i < n; i++)
{
    cout << "Enter the value of array";
    cin >> array[i];
}

for (i = 0; i < n; i++)
{
    cout << array [i] <<" ";
}
smallest = array[0];

for (i = 0; i < n; i++)
{
    if( array[i] < smallest)
    {
        smallest= array[i];
    }

}
cout << "smallest number is :" << smallest;
return 0;
}
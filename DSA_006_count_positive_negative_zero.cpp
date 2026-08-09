/*
Program No: DSA_006
Program Title: COunt positive/negative and zero
Concept: Array
Difficulty: Easy
Author : SUdheer Pathak
Date : 09-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
int i, n, negative = 0, positive = 0, zero = 0;

cout << "Enter the length of array : ";
cin >> n;

int array[n];

for(i = 0; i < n; i++)
{
    cout << "Enter the values for array";
    cin >> array[i];
}

for (i=0 ;i <n; i++)
{
    cout << array[i]<< " ";

}
for (i = 0; i < n; i++)
{
    if (array[i]<0)
    {
        negative ++;
    }

    if (array[i] >0)
    {
        positive ++;
    }
    if(array[i]==0)
    {
        zero++;
    }
}
cout << "negative numbers are :" << negative;
cout << "Positive number is :" << positive;
cout << " zero are : "<< zero;
return 0;
}
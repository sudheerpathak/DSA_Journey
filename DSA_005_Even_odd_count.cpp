/*
Program No: DSA_005
Program Title: Even and odd count
Concept: Array , counter
Difficulty: Easy
Author: Sudheer pathak
Date: 09-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()

{
int i, n, even = 0, odd = 0;

cout << "Enter the length of :";
cin >> n;

vector <int> arr(n);

for (i = 0; i < n; i++)
{
    cout << "Enter the value of array : ";
    cin >> arr [i];
}

for (i = 0; i < n; i++)
{
    cout << arr [i] << " " ;
}


for (i = 0; i < n; i++)
{
    if (arr[i] % 2 == 0 )
    {
       ++even;
    }

    else
    {
        odd ++;
    }
}
cout << " \n even number is :" << even;

cout << " \n Odd number is :" << odd;

return 0;

}
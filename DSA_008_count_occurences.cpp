/*
Program No: 008
Program TiTle:Count occurences
Concept: Array
Difficulty:easy
Author:sudheer PAthak
Date:09-08-2026
*/

#include <iostream>

using namespace std;

int main()

{
int i, n, x, count = 0;

cout << "Enter the length of array : " ;
cin >> n;

int array[n];

for (i = 0; i < n; i++)
{
    cout << "\n enter the value of array :";
    cin >> array[i];
}

cout << "Enter tha value for whih u want to check reoccurence" ;
cin >> x;

for (i = 0; i < n; i++)
{
    if (array [i] == x)
    {
        count++;
    }
}

cout << " \n the value reoccured :" << count << " times" << endl;

return 0;

}
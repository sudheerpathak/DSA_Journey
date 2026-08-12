/*
Program No: DSA_022
Program Title: Missing number using XOR
COncept:XOR, array
DIfficulty:Easy
Author: SUdheer Pathak
DAte: 12-08-2026
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n, missing;

    int xor1 = 0, xor2 = 0;

    cout << "Enter size:" ;
    cin >> n;

    vector <int>arr(n-1);
    
    for (i = 0; i < (n-1); i++)
    {
        cout << "enter the value of array: ";
        cin >> arr[i];
    }

    for ( i = 0; i < (n -1); i++)
    {
        xor1 = xor1 ^ arr[i];

    }
        for ( i = 0; i <= n; i++)
        {
                xor2 = xor2 ^ i;
        }

missing = xor1 ^ xor2;  

cout << "the missing number is :" << missing <<endl; 

return 0;

}
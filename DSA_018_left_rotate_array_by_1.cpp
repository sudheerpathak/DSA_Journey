/*
Program No: DSA_018
Program Title: Left rotate array byy 1
concept: digit manipulation, array
Difficulty:EAsy
author :Sudheer Pathak
DAte: 11-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{

int i, n;

cout << "Enter size:";
cin >> n;

vector <int>arr(n);

for( i =0; i < n ; i++)
{
    cout << "Enter the value for array: ";
    cin >> arr[i];
}

for (i = 0; i < n ; i++)
{
    cout << arr[i] << " ";
}
int j = 0 ;
int temp = arr[0];

while ( j< 1)
{
  
    for(i = 1; i < n; i++)
    {
        arr[j]=arr[i];
        j++;
    }

   
}

 arr[n-1] = temp;

cout << "\n The left roation of array by 1 is given below : ";
for (i = 0; i < n; i++)
{
 cout << arr[i] << " ";
}


return 0;
}
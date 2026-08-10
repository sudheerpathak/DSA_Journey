/*
Program No: DSA_013
Program Title: reversing  an array by 2 pointer method
Concept: 2 pointer method
Difficulty:Easy
Author :Sudheer pathak
Date: 10-08-2026
*/

#include <iostream>
#include <vector>
#include <algorithm> //for std : swap

using namespace std;



int main()
{
    int i, n;

   std:: cout << "ENter the size :";
   std :: cin >> n;

   vector <int> arr(n);

   for (i =0; i < n ; i++)
   {
    cout << " \n Enter the value for array :";
    cin >> arr[i];
   }

   for ( i = 0; i< n; i++)
   {
    cout << arr [i] <<" " << endl;
   }

   int left = 0;
   int right = n-1;

   
   while(left < right)
   {
   swap (arr[left], arr [right]);
    left ++;
    right --;
   }
   cout << "array after reversing" << endl;

   for (i =0 ; i < n; i++)
   {
    cout << arr[i] << " ";
   }

return 0;
}



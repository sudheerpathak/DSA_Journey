/*
Program No: DSA_028
Program title: find intersection of two array
Concept: Array, nested loop, searching
DIfficulty: easy
Author: SUdheer Pathak
Date: 14-08-2026
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
 int i, j, n ,m, k=0;

 cout << "enter size of first array";
 cin >> n;

 vector <int>arr1(n);

 for (i = 0; i < n; i++)
 {
    cout << "Enter the value: ";
    cin >> arr1[i];
 }

 cout << "enter size of second array";
 cin >> m;

 vector <int>arr2(m);

 for (i = 0; i < m; i++)
 {
    cout << "Enter the value: ";
    cin >> arr2[i];
 }
 
 for (i = 0; i < n; i++)
 {
    bool found = false;
    for (j = 0 ; j < m; j++)
    {
        if (arr1[i] == arr2[j])
        {                     
            found = true;
            break;            
        }
        
    }
    
    if (found)
    {
        arr1[k]=arr1[i];
        k++;
    }
}
 for (i = 0; i < k; i++)
 {
    cout << arr1[i] << " ";
 }
    return 0;
}

/*
Time Complexity: O(n × m)
Auxiliary Space: O(1)
*/
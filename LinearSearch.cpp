#include<bits/stdc++.h> 
  
using namespace std; 
   
int LinearSearch(int arr[], int low, int high, int x) 
    { 
        if (high < low) 
            return -1; 
        if (arr[low] == x) 
            return low; 
        if (arr[high] == x) 
            return high; 
        return LinearSearch(arr, low + 1, high - 1, x); 
} 
  
int main() 
{ 
    int arr[] = {12, 34, 54, 2, 3}, i; 
    int n = 5,x=34;  
    int index = LinearSearch(arr, 0, n - 1, x); 
    if (index != -1) 
    cout   << "Element is present at index "<< index;  
    else
        cout << "Element is not present" ; 
    return 0; 
} 
#include <bits/stdc++.h> 
using namespace std; 
 
int binarySearch(int arr[], int low, int high, int x) 
{ 
    if (high >= low) { 
        int mid = (low+high) / 2; 
        
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, low, mid - 1, x); 
            
        return binarySearch(arr, mid + 1, high, x); 
    } 
    return -1; 
} 
  
int main() 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 31; 
    int n =5; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 

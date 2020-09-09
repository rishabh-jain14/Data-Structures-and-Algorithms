#include<bits/stdc++.h>
const int MAX_ELEMENTS=1e2;
using namespace std;
int Selection_Sort(int arr[],int n){
   int min_index;
   for(int i=0;i<n-1;i++){
      min_index=i;
      for(int j=i+1;j<n;j++){
         if(arr[j]<arr[min_index])
            min_index=j;
      }
      swap(arr[min_index], arr[i]); 
   }
   return 0;
}
int main(){
   int n,arr[MAX_ELEMENTS];
   cout <<"Enter the size of array:";
   cin >> n;
   cout <<"Enter the elements of array:";
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   Selection_Sort(arr,n);
   cout <<"The sorted array is:";
   for(int i=0;i<n;i++){
      cout <<arr[i] << " ";
   }
   return 0;
}
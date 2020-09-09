#include<bits/stdc++.h>
using namespace std;
void Merge_Array(int arr[],int left,int right){
    int mid=(left+right)/2;
    int i=left;
    int j=mid+1;
    int k=left;
    int temp[right-left+1];
    while(i<=mid && j<=right){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid){
         temp[k++]=arr[i++];
    }
    while(j<=right){
         temp[k++]=arr[j++];
    }
    //copy all elements to original array 
    for(int t=left;t<=right;t++){
        arr[t]=temp[t];
    }
  
}
void MergeSort(int arr[], int left, int right) 
{ 
    if(left>=right)
        return;
    int mid = (left+right) / 2;  
    MergeSort(arr, left, mid); 
    MergeSort(arr, mid + 1, right); 
    Merge_Array(arr, left, right); 
} 
int main(){
    int arr[100];
    int n;
    cout << "Enter the no of elements in array:";
    cin >> n;
    cout << "Enter the array:";
    for(int i=0;i<n;i++){
       cin >> arr[i];
    }
    MergeSort(arr,0,n-1);
     cout << "Sorted Array is \n"; 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
} 
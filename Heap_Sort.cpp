#include <iostream>
using namespace std;

void heapify(int arr[],int n ,int root){
  int largest=root;
  int left_child=2*root+1;
  int right_child=2*root+2;
  if(left_child<n && arr[left_child]>arr[largest])
    largest=left_child;
  if(right_child<n && arr[right_child]>arr[largest])
    largest=right_child;
  if(largest!=root){
    swap(arr[root],arr[largest]);
    heapify(arr,n,largest);
  }  
}

void heapsort(int arr[] ,int n){
  for(int i=n/2-1;i>=0;i--){
    heapify(arr,n,i);
  }
  for(int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]);
    heapify(arr,i,0);
  }
}

int main() {
  int arr[100];
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
      cin >> arr[i];
  }
  heapsort(arr,n);
  cout << "The sorted array is: \n";
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}
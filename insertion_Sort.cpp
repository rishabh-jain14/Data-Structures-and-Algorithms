#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    int key;
    for(int i=1;i<=n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[10];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
       cin >> arr[i];
    }
    InsertionSort(arr,n);
     cout << "Sorted Vector is \n"; 
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
//Same code on passing a vector does not work becz when we pass any vector to any function unlike arrays(passed as pointers) , a copy of a vector is actually passed:)

// #include<bits/stdc++.h>
// using namespace std;

// void InsertionSort(vector<int> v, int n){
//     int key;
//     for(int i=1;i<=n;i++){
//         key=v[i];
//         int j=i-1;
//         while(j>=0 && v[j]>key){
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1]=key;
//     }
// }

// int main(){
//     vector<int>vec;
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         int val;
//         cin >> val;
//         vec.push_back(val);
//     }
//     InsertionSort(vec,n);
//      cout << "Sorted Vector is \n"; 
//     for(int i=0;i<n;i++){
//         cout << vec[i] << " ";
//     }
//     return 0;
// }
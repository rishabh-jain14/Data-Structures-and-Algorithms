#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr;
    int temp, i, j, k = 4;
    long n;
    vector<int> atemp;
    for(int i = 0; i<5; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"The entered array is : \n";
    for(i = 0; i<=4; i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<"Enter the number of rotations you want : ";
    cin>>n;
    for(i = 5-n; i<5; i++)
    {
        atemp.push_back(arr[i]);
    }
    for(i = 5-n-1; i>=0; i--)
    {
        arr[k--] = arr[i];
    }
    for(i = 0; i<atemp.size(); i++)
    {
        arr[i] = atemp[i];
    }
    cout<<"The rotated Array is : \n";
    for(i = 0; i<=4; i++)
    {
        cout<<arr[i]<<'\t';
    }
}
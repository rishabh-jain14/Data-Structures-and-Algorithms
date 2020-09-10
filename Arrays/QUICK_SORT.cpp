#include <bits/stdc++.h>

using namespace std;

int partition(int *a ,int start,int end)
{
        int pivot = a[end];
        int partition_index = start;
        for(int i=start;i<end;i++)
        {
            if(a[i] <= pivot)
            {
                swap(a[i], a[partition_index]);
                partition_index++;
            }
        }
        swap(a[partition_index], a[end]);
        return partition_index;
    }
void Quick_Sort(int *a, int start, int end)
{
    if(start < end)
    {
        int partition_index = partition(a, start, end);
        Quick_Sort(a, start, partition_index-1);
        Quick_Sort(a, partition_index+1, end);
    }
}

int main()
{
    int n, i, a[100];
    cin>>n;
    for(i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    Quick_Sort(a, 0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

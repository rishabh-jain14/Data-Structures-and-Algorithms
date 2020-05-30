#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int num, min_idx, i, j, temp;
    printf("Enter the number of elements :");
    scanf("%d", &num);
    cout<<"Enter the elements \n";
    for(i = 0; i<num; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for (i = 0; i<num-1; i++)
    {
        min_idx = i;
        for (j = i+1; j<num; j++)
        {
            if (v[j] < v[min_idx])  
                min_idx = j;
        }
        temp = v[min_idx];
        v[min_idx] = v[i];
        v[i] = temp;
    }
    cout<<"The sorted array is as follows : ";
    for(i = 0; i<num; i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}
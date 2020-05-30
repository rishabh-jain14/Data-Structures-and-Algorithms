#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int num;
    printf("Enter the number of elements :");
    scanf("%d", &num);
    int i, j, temp;
    cout<<"Enter the elements \n";
    for(i = 0; i<num; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(i = 0; i<num; i++)
    {
        for(j = 0; j<num-1-i; j++)
        {
            if(v[j] > v[j+1])
            {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array is as follows : ";
    for(i = 0; i<num; i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}
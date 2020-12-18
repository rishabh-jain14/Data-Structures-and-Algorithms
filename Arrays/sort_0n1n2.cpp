/*CPP Arrays #3 Sort array containing 0s, 1s and 2s in ascending order
*/

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    vector<int> v, v_out;
    cout<<"Enter the values in the array for reversal. Press Q/q to stop entering values.\n";
    string st;
    while(true)
    {
        cin>>st;
        if(st.compare("q") == 0 or st.compare("Q") == 0)
        {
            break;
        }
        else
        {
            v.push_back(stoi(st));
        }
    }
    int i, j = 0, k;
    for(i = 0; i<3; i++)
    {
        j = 0;
        while(j != v.size())
        {
            if(v[j] == i)
            {
                v_out.push_back(v[j]);
                v.erase(v.begin()+j);
            }
            else
            {
                j++;
            }
        }
    }
    cout<<"The sorted array:\t";
    for(i = 0; i<v_out.size(); i++)
    {
        cout<<v_out[i]<<'\t';
    }
    getch();
}
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    int Min=INT16_MAX;
    int Max=INT16_MIN;
    int Min_pos=-1;
    int Max_pos=-1;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    

    // cout<<endl;

    for(int i=0;i<n;i++)
    {
        if(Min>=arr[i])
        {
            Min=arr[i];
            Min_pos=i;
        }

        if(Max<arr[i])
        {
            Max=arr[i];
            Max_pos=i;
        }
    }

    // cout<<Max<<" "<<Min<<endl;
    int swaps=0;

    for(int i=Min_pos;i<n-1;i++)
    {
        swap(arr[i],arr[i+1]);
        swaps++;
    }

    // cout<<swaps<<endl;

    // for(auto itr :arr)
    // {
    //     cout<<itr<<" ";
    // }
    // cout<<endl;

    Max_pos=-1;
    Max=INT16_MIN;

    for(int i=0;i<n;i++)
    {
        
        if(Max<arr[i])
        {
            Max=arr[i];
            Max_pos=i;
        }
    }

    swaps+=Max_pos;
    cout<<swaps<<endl;


}

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    solver();
    return 0;
}

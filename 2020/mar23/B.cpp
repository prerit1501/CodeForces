#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;

    vector<vector<ll>> arr(n);

    set<ll> map;

    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;

        arr[i]=vector<ll> (k);
        for(int j=0;j<k;j++)
        {
            ll temp;
            cin>>temp;
            arr[i][j]=(temp);
            map.insert(temp);
        }
    }

    set<ll> alphamap;

    for(int i=1;i<=n;i++)
    {
        alphamap.insert(i);
    }

    vector<ll>left;

    // for(auto itr:map)
    // {
    //     cout<<itr<<" ";
    // }

    // cout<<endl;

    ll count =0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;

        for(int j=0;j<arr[i].size();j++)
        {
            if(map.find(arr[i][j])!=map.end())
            {
                map.erase(arr[i][j]);
                alphamap.erase(arr[i][j]);
                flag=true;
                count++;
                break;

            }
        }

        if(flag==false)
        {
            left.push_back(i);
        }
        
    }

    if(map.size==0)
    {
        if(count==0)
        {
            cout<<
        }
    }
    




}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}

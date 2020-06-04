#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    vector<ll> in(4);

    for(int i=0;i<4;i++)
        cin>>in[i];

    sort(in.begin(),in.end());

    vector<ll> ans(3);

    ll temp=in[1]-in[0];

    ans[2]=(temp+in[2])/2;

    ans[0]=in[1]-ans[2];

    ans[1]=in[0]-ans[0];




    for(auto itr:ans)
        cout<<itr<<" ";





}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin>>t;
    t=1;

    while(t--)
    {
        solver();
    }
    return 0;
}

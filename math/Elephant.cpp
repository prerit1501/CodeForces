#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;

    ll ans=0;

    ans+=n/5;

    if(n%5!=0)
    {
        cout<<ans+1;

    }
    else
    {
        cout<<ans;
    }
    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--)
    {
        solver();
    }
    return 0;
}

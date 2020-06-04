#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,m,a;

    cin>>n>>m>>a;

    // cout<<ceil(n/a)*ceil(m/a);

    ll fi=(n%a)==0?n/a:n/a+1;
    ll se=(m%a)==0?m/a:m/a+1;

    cout<<fi*se;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // cin>>t;
    t=1;

    while(t--)
    {
        solver();
    }
    return 0;
}
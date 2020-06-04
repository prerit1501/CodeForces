#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }

    if(n&1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
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

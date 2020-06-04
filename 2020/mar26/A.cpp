#include<bits/stdc++.h>
#define ll long long int
//codeforces round 629 div 3

using namespace std;

void solver()
{
    ll a,b;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else
    {
        ll ans=((a/b)+1)*b-a;
        cout<<ans<<endl;

    }
    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}

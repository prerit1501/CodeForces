#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<0<<endl;
        return;
    }

    if(a<b)
    {
        if((b-a)%2==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        return;
        
    }
    else
    {
        if((a-b)%2==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        return;
        
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

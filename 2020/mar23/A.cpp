#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,k;
    cin>>n>>k;
    if(k>=n)
    {
        if(k==1 && n==1)
        {
            cout<<"YES"<<endl;
            return;
        } 
        cout<<"NO"<<endl;
        return;
    }
    if(k%2==0)
    {
        if(n%2==0)
        {
            if(k*k<=n)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        if(n%2==1)
        {
            if(k*k<=n)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
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

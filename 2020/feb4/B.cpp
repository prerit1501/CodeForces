#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;

    ll amt=0;
    while(n>=10)
    {
        // amt+=10;
        // n=n-10+1;
        ll temp=n,count=0;
        while(temp)
        {
            count++;
            temp/=10;
        }

        ll cost=pow(10,count-1);
        count=0;
        amt+=cost;
        n=n-cost+floor(cost/10);
    }
    if(n>0)
    {
        amt+=n;
    }
    cout<<amt<<endl;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}

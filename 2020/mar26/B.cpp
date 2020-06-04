#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,k;
    cin>>n>>k;



    vector<char> start(n-2,'a');



    

    ll first=sqrt(2*k+1);

    ll pos=n-first-1;

    start.insert(start.begin()+pos,'b');

    ll r1=1,r2=2;
    ll f=1,s=2;

    while(true)
    {
        if(k>=r1&& k<r2)
        {
            break;
        }

        r1+=f;
        r2+=s;
        f++;
        s++;

    }
    ll help=r2-k;

    start.insert(start.begin()+pos+help,'b');



    for(auto itr:start)
        cout<<itr;

    cout<<endl;



    
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

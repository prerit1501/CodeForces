#include<bits/stdc++.h>
#define ll long long int

using namespace std;


void solver()
{
    int n,m;
    cin>>n>>m;

    vector<int> a (n) ,p(m) ,b(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    for(int i=0;i<m;i++)
    {
        
        cin>>p[i];
        p[i]--;
    }

    for(int i=0;i<400;i++)
    {
        for(int j=0;j<p.size();j++)
        {
            swap(a[p[j]],a[p[j]+1]);
            if(is_sorted(a.begin(),a.end()))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    for(int i=0;i<400;i++)
    {
        for(int j=p.size()-1;j>=0;j--)
        {
            swap(a[p[j]],a[p[j]+1]);
            if(is_sorted(a.begin(),a.end()))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }


    cout<<"NO"<<endl;
    return;




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

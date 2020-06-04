#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    string s;
    cin>>s;


    int ans=1;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')
        {
            int itr=i;
            while(s[itr]=='L')
            {
                itr++;
            }
            int local=itr-i+1;
            if(local>ans)
            {
                ans=local;
            }
            i=itr;
        }
    }

    cout<<ans<<endl;
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

#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define MOD 1000000007

using namespace std;

void solver()
{
    ll n;
    cin>>n;

    vector<int> strg (n+1);
    vector<bool> help (n+1,false);
    set<int> s;
        // cout<<"yolo"<<endl;

    help.er
    for(int i=1;i<=n;i++)
        cin>>strg[i];

    for(int i=1;i<=n;i++)
    {
        int itr = strg[i];
        help[itr]=true;
    }

    for(int i=1;i<=n;i++)
    {
        if(!help[i])
        {
            s.insert(i);
        }
    }

    for(auto itr:s)
        cout<<itr<<" ";

    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(strg[i]!=0)
        {
            cout<<strg[i]<<" ";
        }
        else
        {
            if(*s.begin()!=i)
            {
                cout<<*s.begin()<<" ";
                
                s.erase(s.begin());

                // s.
            }
            else
            {
                auto itr = s.begin();
                itr++;
                cout<<*itr<<" ";
                s.erase(itr);
            }
            
        }
        
    }
    cout<<endl;




    

}

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);   
    freopen("output.txt","w",stdout);
    #endif 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
            // cout<<"yolo"<<endl;

    solver();

    return 0;
}
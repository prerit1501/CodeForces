#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n;
    cin>>n;

    string ans;
    cin>>ans;

    string first,second;

    first=second="1";

    bool flag=true;

    for(int i=1;i<n;i++)
    {
        if(ans[i]=='2'&& flag)
        {
            first+="1";
            second+="1";
        }
        else if(ans[i]=='0')
        {   
            first+="0";
            second+="0";

        }
        else if(ans[i]=='1'&& flag)
        {
            
        }


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

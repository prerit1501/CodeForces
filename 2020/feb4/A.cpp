#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    int odd=0;
    int even=0;
    ll sum=0;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum+=temp;
        arr[i]=temp;
    }

    if(sum%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(odd == 0)
        {
            cout<<"NO"<<endl;
        }
        else if(even == 0 && odd % 2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
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

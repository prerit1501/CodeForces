#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());

    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])%2==1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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

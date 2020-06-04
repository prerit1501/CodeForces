#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n;
    cin>>n;

    vector<int> arr(n);


    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }


    cout<<fixed<<setprecision(12)<<double(sum/n);

}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solver();
    }
    return 0;
}

#include<iostream>
#include<string>
#include<vector>
#define ll long long int
using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll max=INT32_MIN,min=INT64_MAX;
        int LarIdx=-1,SmlIdx=-1;
        vector<ll> arr(n);
        for(int i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            if(temp>max)
            {
                max=temp;
                LarIdx=i;
            }
            if(temp<min)
            {
                min=temp;
                SmlIdx=i;
            }
            arr[i]=temp;
        }
      
        
        
       
        
    }
    return 0;
}

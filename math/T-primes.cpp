#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPrime(ll n)
{

       if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true;
}

void solver()
{
    int n;
    cin>>n;

    vector<ll> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll fi=sqrt(arr[i]);

        if(fi*fi==arr[i])
        {
            if(isPrime(fi))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    
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
    int t;
    // cin>>t;
    t=1;

    while(t--)
    {
        solver();
    }
    return 0;
}

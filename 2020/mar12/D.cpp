#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int binarySearchCount(vector<ll> &arr, int n, int key) 
{ 
    int left = 0; 
    int right = n - 1; 
  
    int count = 0; 
  
    while (left <= right) { 
        int mid = (right + left) / 2; 
  
        // Check if middle element is 
        // less than or equal to key 
        if (arr[mid] < key) { 
  
            // At least (mid + 1) elements are there 
            // whose values are less than 
            // or equal to key 
            count = mid + 1; 
            left = mid + 1; 
        } 
  
        // If key is smaller, ignore right half 
        else
            right = mid - 1; 
    } 
  
    return count; 
}
  


void solver()
{

    ll n;
    cin>>n;

    vector<ll> a(n),b(n);

    for(ll i=0;i<n;i++)
        cin>>a[i];

    for(ll i=0;i<n;i++)
        cin>>b[i];

    // sort(a.begin(),a.end());

    // sort(b.begin(),b.end());

    vector<int> strg (n);

    int count_0=0,count_1=0,rest=0;

    vector<ll> positive,negative;


    for(ll i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            strg[i]=0;
            count_0++;
        }
        else if(a[i]>b[i])
        {
            strg[i]=1;
            count_1++;
            positive.push_back(a[i]-b[i]);

            
        }
        else
        {
            strg[i]=-1;
            rest++;
            negative.push_back(b[i]-a[i]);
        }
                
    }

    ll ans=0;

    if(count_1>1)
    {
     ans=count_0*count_1 + (count_1*(count_1+1))/2;
    }

    else
    {
         ans=count_0*count_1;
    }
    

    // cout<<count_0<<count_1<<endl;

    sort(positive.begin(),positive.end());

    sort(negative.begin(),negative.end());

    for(int i=0;i<positive.size();i++)
    {
        ll temp=0;
        for(int j=0;j<negative.size();j++)
        {
            if(a[i]>b[j])
            {
                temp++;
            }
            else
            {
                break;
            }
            
        }
        ans+=temp;
    }



    cout<<ans<<endl;


   

}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solver();
    
    return 0;
}

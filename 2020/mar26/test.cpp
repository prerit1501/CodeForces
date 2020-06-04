#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
void solver()
{
    ll n,k;
    cin>>n>>k;

    if(n==3)
    {
        if(k==1)
        {
            cout<<"abb"<<endl;
            return;
        }
        else if(k==2)
        {
            cout<<"bab"<<endl;
            return;
        }
        else
        {
            cout<<"bba"<<endl;
            return;
        }
        
    }
 
    string start (n-2,'a');
 
 
 
    ll first=sqrt(2*k+1);
 
    ll pos=n-first-1;
 
    start.insert(start.begin()+pos,'b');
 
    

    
 
 
 
    cout<<start<<endl;
 
 
 
    
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
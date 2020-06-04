#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define MOD 1000000007

using namespace std;

void solver()
{
	ll n,k;
	cin>>n>>k;
	
// n is even
    if(n%2==0)
    {
        if(k%2==0)
        {
            if(n>=k)
            {
                cout << "YES" << endl;
                for(int i =0 ; i < k - 1; i++)
                    cout<<1<<" ";

                cout<<n - (k-1);
                cout<<endl;
                return;
            }
            else
            {
                cout<< "NO" <<endl;
                return;
            }
            
        }
        else
        {
            if(n>=k*2)
            {
                cout << "YES" << endl;
                for(int i =0 ; i < k - 1; i++)
                    cout<<2<<" ";

                cout<<n - (k-1)*2;
                cout<<endl;
                return;
            }
            cout<< "NO" <<endl;
            return;
        
        }
        
        
    }
    // n is odd
    else
    {
        if(k%2==0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            if(n>=k)
            {
                cout << "YES" << endl;
                for(int i = 0 ; i < k - 1; i++)
                    cout<<1<<" ";

                cout<<n - (k-1);
                cout<<endl;
                return;
            }
            else
            {
                cout<< "NO" <<endl;
                return;
            }
            
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
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}
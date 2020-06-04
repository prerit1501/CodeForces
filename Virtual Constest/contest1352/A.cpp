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
	int n;
	cin>>n;
	

    vector<int> strg;

    int temp = n;
    int mult=1;

    while(temp)
    {
        int last = temp%10;
        if(last)
            strg.push_back(last * mult);
        
        mult*=10;
        temp/=10;

    }
    cout<<strg.size()<<endl;
    
    for(auto itr :strg)
        cout<<itr<<" ";
    
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


    
    int t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}
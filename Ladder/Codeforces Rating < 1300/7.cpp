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
#include<unordered_set>
#include<map>
#include<unordered_map>
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define MOD 1000000007

using namespace std;

void solver()
{
    string t;
    cin>>t;
    int lower= 0,upper=0;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]>=97)
            lower++;
        else upper++;
    }
    if(lower>=upper)
        for(int i=0;i<t.length();i++)
            t[i]=tolower(t[i]);
    else
        for(int i=0;i<t.length();i++)
            t[i]=toupper(t[i]);

    cout<<t;    

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


    solver();
    
    return 0;
}
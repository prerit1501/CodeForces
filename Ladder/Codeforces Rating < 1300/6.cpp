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

	int a,b,c,d,e,f,g,h,i;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	cout<<(a+b+d+1)%2<<(a+b+c+e+1)%2<<(b+c+f+1)%2<<endl;
	cout<<(a+d+e+g+1)%2<<(b+d+e+f+h+1)%2<<(c+e+f+i+1)%2<<endl;
	cout<<(d+g+h+1)%2<<(e+g+h+i+1)%2<<(f+h+i+1)%2<<endl;

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
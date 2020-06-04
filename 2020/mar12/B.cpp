

#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int lpsq(vector<int> & arr)
{
vector<vector<int>>  strg (arr.size());

for(int i=0;i<arr.size();i++)
{
    strg[i]=vector<int > (arr.size(),0);
}

for(int g = 0; g < arr.size(); g++){
    for(int i = 0; i < arr.size() - g; i++){
        int j = i + g;

        if(g == 0){
            strg[i][j] = 1;
        } else if(g == 1){
            strg[i][j] = arr[i] == arr[i]? 2: 1;
        } else {
            if(arr[i] == arr[j]){
                strg[i][j] = 2 + strg[i + 1][j - 1];
            } else {
                strg[i][j] = max(strg[i][j - 1], strg[i + 1][j]);
            }
        }
    }
}
return strg[0][strg.size()-1];
}

void solver()
{
    int n;
    cin>>n;

    // string str="";

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=lpsq(arr);

    if(ans>=3)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    


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

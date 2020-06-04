    #include<bits/stdc++.h>
    #define ll long long int

    using namespace std;

    void solver()
    {
        int a,b;

        cin>>a>>b;

        cout<<min(a,b)<<" "<<abs(a-b)/2;


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

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int temp;
            cin>>temp;
            if(temp!=0)
            {
                x=i;
                y=j;
            }
        }
    }

    cout<<abs(3-x)+abs(3-y)<<endl;


    return 0;
}

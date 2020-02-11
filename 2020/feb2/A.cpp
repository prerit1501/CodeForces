#include<iostream>
#include<string>
#define ll long long int
using namespace std;

bool isEbne(string ques)
{
    char last=ques[ques.length()-1];
    last-=48;
    if(last%2!=0)
    {
        ll ans=0;
        for(int i=0;i<ques.length();i++)
        {
            ans+=ques[i]-48;
        }
        if(ans%2==0)
        {
            return true;
        }
    }
    return false;
}

bool solver(string ques,string asf,int itr)
{

    if(asf[0]=='0')
    {
        return false;
    }
    if(itr==ques.length())
    {
        return false;
    }

    if(isEbne(asf))
    {
        cout<<asf<<endl;
        return true;
    }



    return solver(ques,asf+ques[itr],itr+1) || solver(ques,asf,itr+1);
   
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ques;
        cin>>ques;
        if(isEbne(ques))
        {
            cout<<ques<<endl;
        }
        else if(!solver(ques,"",0))
        {
            cout<<-1<<endl;
        }
        
    }
    return 0;
}

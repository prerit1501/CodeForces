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

bool solver(string ques)
{
    if(ques.length()==0)
    {
        return false;
    }

    char ch=ques[ques.length()-1];
    if((ch-48)%2==0)
    {
        string ans=ques.substr(0,ques.length()-1);
        return solver(ans);
    }
    else
    {
        if(isEbne(ques))
        {
            cout<<ques<<endl;
            return true;
        }

        for(int i=ques.length()-2;i>=0;i--)
        {
            if((ques[i]-48)%2!=0)
            {
                string ans=ques.substr(0,i)+ques.substr(i+1,ques.length()-1);
                if(ans[0]=='0')
                {
                    continue;
                }
                else
                {
                    cout<<ans<<endl;
                    return true;
                }
                

            }
        }

        return false;


    }
     return false;
   
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
        else  if(!solver(ques))
        {
            cout<<-1<<endl;
        }
        
       
        
    }
    return 0;
}

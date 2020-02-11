#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;
    string ques;
    cin>>ques;

    vector<int> arr(4,0);//lrud
    ll l_pos=0,r_pos=0,l,r;
    char l_char=ques[0],r_char=ques[0];
    ll len=-1;
    if(ques[0]=='L')
    {
        arr[0]++;
    }
    else if(ques[0]=='R')
    {
        arr[1]++;
    }
    else if(ques[0]=='U')
    {
        arr[2]++;
    }
    else if(ques[0]=='D')
    {
        arr[3]++;
    }
    for(int i=1;i<n;i++)
    {
        char ch=ques[i];
        if(ch=='L')
        {
            arr[0]++;
            r_pos=i;
            r_char='L';
        }
        else if(ch=='R')
        {
            arr[1]++;
            r_pos=i;
            r_char='R';
        }
        else if(ch=='U')
        {
            arr[2]++;
            r_pos=i;
            r_char='U';
        }
        else if(ch=='D')
        {
            arr[3]++;
            r_pos=i;
            r_char='D';
        }

        // for(auto itr : arr)
        // {
        //     cout<<itr<<" ";
        // }
        // cout<<endl;

        if(r_char==l_char || arr[0]>1 || arr[1]>1 || arr[2]>1 || arr[3]>1)
        {
            l_pos=r_pos=l_pos+1;
            l_char=r_char=ques[l_pos];
            arr[0]=arr[1]=arr[2]=arr[3]=0;
            if(ques[l_pos]=='L')
            {
                arr[0]++;
            }
            else if(ques[l_pos]=='R')
            {
                arr[1]++;
            }
            else if(ques[l_pos]=='U')
            {
                arr[2]++;
            }
            else if(ques[l_pos]=='D')
            {
                arr[3]++;
            }
            i=l_pos;

            // cout<<"yolo"<<endl;
        }
        else if((arr[0]==1 && arr[1]==1 && arr[2]==1 && arr[3]==1))
        {
            // cout<<l_pos+1<<" "<<r_pos+1<<endl;
            l=l_pos,r=r_pos;
            len=4;
            l_pos=r_pos=i;
            l_char=r_char=ques[i];
            arr[0]=arr[1]=arr[2]=arr[3]=0;
            if(ques[i]=='L')
            {
                arr[0]++;
            }
            else if(ques[i]=='R')
            {
                arr[1]++;
            }
            else if(ques[i]=='U')
            {
                arr[2]++;
            }
            else if(ques[i]=='D')
            {
                arr[3]++;
            }

        }
        else if((arr[0]==1&&arr[1]==1))
        {
            if(ques[l_pos]=='U' || ques[l_pos]=='D')
            {
                cout<<l_pos+2<<" "<<r_pos+1<<endl;
                return;
            }
            else if((r_pos-l_pos)==1)
            {
                cout<<l_pos+1<<" "<<r_pos+1<<endl;
                return; 
            }
            
           
        }
        else if((arr[2]==1&&arr[3]==1))
        {
            if(ques[l_pos]=='L' || ques[l_pos]=='R')
            {
                cout<<l_pos+2<<" "<<r_pos+1<<endl;
                len=2;
                return;
            }
            else if((r_pos-l_pos)==1)
            {
                cout<<l_pos+1<<" "<<r_pos+1<<endl;
                len=2;
                return; 
            }

        }

        
        
    }
    if(len==4)
    {
        cout<<l+1<<" "<<r+1<<endl;
    }
    if(len==-1)
    cout<<-1<<endl;
    return;

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

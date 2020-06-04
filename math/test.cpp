#include<bits/stdc++.h>
using namespace std;
// #define 1000 1001
bool mazepath(int sr,int sc,int dr,int dc,int maze[1000][1000],int r, int c){
    if(sr==dr&&sc==dc)
    {
        maze[sr][sc]=1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; i < c; j++)
        
                cout<<maze[i][j]<<" ";
            
            cout<<endl;
        }
        return true;
    }

    if(sr>dr||sc>dc)
    {
        return false;
    }


    if(maze[sr][sc]==0){
        maze[sr][sc]=1;
        // qb[sr][sc]=true;
        bool vd=mazepath(sr+1,sc,dr,dc,maze,r,c);
        bool hr=mazepath(sr,sc+1,dr,dc,maze,r,c);

        // qb[sr][sc]=false;
        maze[sr][sc]=0;

        return vd || hr;
    }
    else
    {
        return false;
    }
        
 
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r,c;
    cin>>r>>c;

    int maze[1000][1000]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char rr;
            cin>>rr;
            if(rr=='X'){
                maze[r][c]=-1;
            }
            else{
                maze[r][c]=0;
            }
        }
    }

    int fa[1000][1000]={0};

    bool qb[1000][1000]={false};

    bool a=mazepath(0,0,r-1,c-1,maze,r,c);
    if(a==false){
        cout<<-1<<endl;
    }
    return 0;
}

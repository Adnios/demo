#include<bits/stdc++.h>
using namespace std;
int n,m,a[110][110],sum,cnt;
char ch;
int xx[4]={-1,1,0,0},yy[4]={0,0,-1,1};
int vis[110][110];
void dfs(int x,int y){
    vis[x][y]=1;
    if(sum>n*m){
        cout<<-1;
        exit(0);
    }
    for(int i=0;i<=3;i++){
        int tx=x+xx[i];
        int ty=y+yy[i];
        if(tx<1||tx>n||ty<1||ty>m) continue;
        if(a[tx][ty]==a[x][y]+1||(a[tx][ty]==1&&a[x][y]==4)&&(vis[tx][ty]==0)){
            sum++;
            dfs(tx,ty);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ch;
            if(ch=='L')a[i][j]=1;
            else if(ch=='Q') a[i][j]=2;
            else if(ch=='B') a[i][j]=3;
            else a[i][j]=4;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                if(vis[i][j]==0)
                    dfs(i,j);
            }
        }
    }
    cout<<sum/4;
    return 0;
}
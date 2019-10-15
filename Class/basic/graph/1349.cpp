//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>
using namespace std;
const int inf=0x3f3f3f3f;
int mapp[150][150];
int dis[150];
int vis[150];
int n;

void prim(){//和dijkstra相似
    int sum=0;
    for(int i=1;i<=n;i++)
        dis[i]=mapp[1][i];
    vis[1]=1;
    dis[1]=1;
    for(int i=1;i<=n-1;i++){
        int minn=inf;
        int u;
        for(int j=1;j<=n;j++){
            if(!vis[j]&&minn>dis[j]){
                u=j;
                minn=dis[j];
            }
        }
        vis[u]=1;
        sum+=minn;
        for(int j=1;j<=n;j++){
            if(!vis[j]&&mapp[u][j]<dis[j]){
                dis[j]=mapp[u][j];
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mapp[i][j];
        }
    }
    prim();
    return 0;
}

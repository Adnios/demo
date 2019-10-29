#include <bits/stdc++.h>
using namespace std;
//未通过
int graph[1005][1005];
int dis[1005];
int vis[1005];
const long long mod=(1<<31)-1;
int n,m;
void Dij() {
    for (int i = 1; i <= n; i++)
        dis[i] = graph[1][i];
    dis[1] = 0;
    vis[1] = 1;
    for (int i = 1; i < n; i++) {
        int mindis = INT_MAX, temp = 0;
        for (int j = 1; j <= n; j++) {
            if (vis[j] == 0 && dis[j] < mindis) {
                mindis = dis[j];
                temp = j;
            }
        }
        vis[temp] = 1;
        for (int j = 1; j <= n; j++) {
            if (dis[j] > dis[temp] + graph[temp][j])
                dis[j] = dis[temp] + graph[temp][j];
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    memset(graph,INT_MAX, sizeof(graph));
    for(int i=0;i<m;i++){
        int x,y,v;
        scanf("%d%d%d",&x,&y,&v);
        graph[x][y]=graph[y][x]=min(graph[x][y],v);
    }
    long long ans=1;
    Dij();
    for(int i=2;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(graph[j][i]!=INT_MAX&&dis[j]+graph[j][i]==dis[i])
                cnt++;
        }
        ans=(ans*cnt)%mod;
    }
}
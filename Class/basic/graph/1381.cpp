#include<cstdio>
#include <iostream>
using namespace std;
#define inf 0x3f3f3f3f
int m, n;
int a, b, c;
int g[2005][2005];
int dis[2005], vis[2005];

void dijs(int s)
{
    for(int i=1; i<=n; i++)
        dis[i]=g[s][i];
    dis[s]=0;
    vis[s]=1;
    for(int i=1; i<n; i++)
    {
        int mindis=inf, temp=0;
        for(int j=1; j<=n; j++)
        {
            if(vis[j]==0&&dis[j]<mindis)
            {
                mindis=dis[j];
                temp=j;
            }
        }
        vis[temp]=1;
        for(int j=1; j<=n; j++)
        {
            if(dis[j]>dis[temp]+g[temp][j])
                dis[j]=dis[temp]+g[temp][j];
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n+5;i++){
        for(int j=0;j<n+5;j++){
            g[i][j]=inf;
        }
    }
    for(int i=1; i<=n; i++)
        g[i][i]=0;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b>>c;
        if(g[a][b]>c)
            g[a][b]=g[b][a]=c;
    }
    dijs(1);
    if(dis[n]==inf)printf("-1");
    else printf("%d",dis[n]);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
#define inf 0x3f3f3f3f

int n;
int m;
int g[500][500];
int dis[500], vis[500];
int q;
int cost;
void dijs(int s){
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
    cin>>n>>q;
    for(int i=0;i<n+5;i++){
        for(int j=0;j<n+5;j++){
            g[i][j]=inf;
        }
    }
    for(int i=1; i<=n; i++)
        g[i][i]=0;
    for(int i=1; i<=q; i++){
        cin>>m;
        vector<int> v;
        for(int j=1;j<=m;j++){
            int temp;cin>>temp;
            v.push_back(temp);
        }
        cin>>cost;
        for(int k=0;k<v.size();k++){
            for(int l=0;l<v.size();l++){
                g[v[k]][v[l]]=min(cost,g[v[k]][v[l]]);
                g[v[l]][v[k]]=min(cost,g[v[l]][v[k]]);
            }
        }
    }
    int s,t;
    cin>>s>>t;
    dijs(s);
    if(dis[t]==inf)
        cout<<"-1"<<endl;
    else
        cout<<dis[t]<<endl;
    return 0;
}
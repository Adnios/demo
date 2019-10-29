#include <bits/stdc++.h>
using namespace std;
#define maxn 100010
struct  Node{
    int to,next;
};
Node edge[maxn];
int head[maxn],power[maxn],n,m,d[maxn],fa[maxn][30],ans,num;
void add(int x,int y){
    edge[++num].to=y;
    edge[num].next=head[x];
    head[x]=num;
}
void work(int u,int fath){
    d[u]=d[fath]+1;
    fa[u][0]= fath;
    for(int i=0;fa[u][i];++i){
        fa[u][i+1]=fa[fa[u][i]][i];
    }
    for(int i=head[u];i;i=edge[i].next){
        int e=edge[i].to;
        if(e!=fath)
            work(e,u);
    }
}
int Lca(int u,int v){
    if(d[u]>d[v])
        swap(u,v);
    for(int i=20;i>=0;--i){
        if(d[u]<=d[v]-(1<<i))
            v=fa[v][i];
    }
    if(u==v)
        return u;
    for(int i=20;i>=0;--i){
        if(fa[u][i]!=fa[v][i])
            u=fa[u][i],v=fa[v][i];
    }
    return fa[u][0];
}
void Get(int u,int fath){
    for(int i=head[u];i;i=edge[i].next){
        int e=edge[i].to;
        if(e== fath)
            continue;
        Get(e,u);
        power[u]+=power[e];
    }
    ans=max(ans,power[u]);
}
int main(){
    cin>>n>>m;
    int x,y;
    for(int i=1;i<n;++i){
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }
    work(1,0);
    for(int i=1;i<=m;++i){
        cin>>x>>y;
        int lca=Lca(x,y);
        ++power[x];
        ++power[y];
        --power[lca];
        --power[fa[lca][0]];
    }
    Get(1,0);
    cout<<ans<<endl;
}
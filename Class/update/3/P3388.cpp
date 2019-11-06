#include <bits/stdc++.h>
using namespace std;
const int maxn=2e6+5;
vector<int> G[maxn];//邻接矩阵
int dfn[maxn],low[maxn];
set<int> ans;
int timing;
void tarjan(int u,int rt){
    timing ++;
    low[u]=dfn[u]=timing;
    int child=0;
    for(int i=0;i<G[u].size();i++){//对普通结点
        int v=G[u][i];
        if(dfn[v]==0){//如果子节点没有被访问过，则访问子节点
            child++;
            tarjan(v,rt);
            low[u]=min(low[u],low[v]);
            if(u!=rt&&low[v]>=dfn[u]){
                ans.insert(u);
            }
        }
        low[u]=min(low[u],dfn[v]);//!!!无向图与有向图的区别
    }
    if(child>=2&&u==rt){//子节点>=2
        ans.insert(u);
    }
}
int main(){
    int n,m;
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(dfn[i]==0)
            tarjan(i,i);
    }
    cout<<ans.size()<<endl;
    set<int>::iterator it;
    for(it=ans.begin ();it!=ans.end ();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
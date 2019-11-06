#include <bits/stdc++.h>
using namespace std;
const int maxn=1005,maxm=2e5+5;

int n,m,a1,a2,c1,c2;
vector<int> G[maxn*2];
int timing=0,dfn[maxn*2],low[maxn*2],colorcnt=0,color[maxn*2];
stack<int> s;
bool ins[maxn*2];
void init(){
    timing=0;colorcnt=0;
    memset(dfn,0, sizeof(dfn));
    memset(low,0, sizeof(low));
    memset(color,0,sizeof(color));
    memset(ins,false,sizeof(ins));
    for(int i=0;i<2*n;i++)
        G[i].clear();

}
void tarjan(int u){
    timing++;
    dfn[u]=low[u]=timing;
    s.push(u);
    ins[u]=true;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(dfn[v]==0){
            tarjan(v);
            low[u]=min(low[u],low[v]);
        }
        else if(ins[v]==true){
            low[u]=min(low[u],dfn[v]);
        }
    }
    if(dfn[u]==low[u]){
        colorcnt++;
        while(s.top()!=u){
            int temp=s.top();
            s.pop();
            ins[temp]=false;
            color[temp]=colorcnt;
        }
        s.pop();
        color[u]=colorcnt;
        ins[u]=false;
    }
}
bool solve(){
    for(int i=0;i<2*n;i++)
        if(dfn[i]==0)
            tarjan(i);

    for(int i=0;i<2*n;i+=2)
        if(color[i]==color[i+1])
            return 0;

    return 1;
}

int main(){
    while(~scanf("%d%d",&n,&m)){
        init();
        for(int i=1;i<=m;i++){
            scanf("%d%d%d%d",&a1,&a2,&c1,&c2);
//        cin>>a1>>a2>>c1>>c2;
            G[2*a1+c1].push_back(2*a2+1-c2);
//        G[2*a2+1-c2].push_back(2*a1+c1);
            G[2*a2+c2].push_back(2*a1+1-c1);
//        G[2*a1+1-c1].push_back(2*a2+c2);
        }
        if(solve()==true)
            printf("YES\n");
        else
            printf("NO\n");
    }


}
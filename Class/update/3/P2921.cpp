#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int n;
int nxt[maxn];
int dfn[maxn];
int low[maxn];
bool ins[maxn];//是否在栈中
stack<int> s;
int colorcnt;//记录强连通分量个数
int timing;
int color[maxn];//第i点属于哪个强连通分量
int colornum[maxn];
int ans[maxn];
void tarjan(int u){
    timing++;
    dfn[u]=low[u]=timing;
    s.push(u);
    ins[u]=true;
    int v=nxt[u];//找子节点，子节点没有被访问过，则tarjan
    if(dfn[v]==0){
        tarjan(v);
        low[u]=min(low[u],low[v]);
    }
    else if(ins[v]==true){
//        low[u]=min(low[u],low[v]);
        low[u]=min(low[u],dfn[v]);
    }
    if(dfn[u]==low[u]){//找到了一个强连通分量
        colorcnt++;
        while(s.top()!=u){
            int temp=s.top();
            s.pop();
            ins[temp]=false;
            color[temp]=colorcnt;
            colornum[colorcnt]++;
        }
        s.pop();
        color[u]=colorcnt;
        colornum[colorcnt]++;
        ins[u]= false;
    }
}
int findans(int u){
    if(nxt[u]==u){//闭环
        return ans[u]=1;
    }
    if(ans[nxt[u]]){//u的子节点有答案
        return ans[u]=ans[nxt[u]]+1;
    }
    else{
        return  ans[u]=findans(nxt[u])+1;
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n;i++)
        cin >> nxt[i];
    for(int i=1;i<=n;i++){
        if(dfn[i]==0)
            tarjan(i);
    }
    for(int i=1;i<=n;i++){
        if(colornum[color[i]]>1){
            ans[i]=colornum[color[i]];
        }
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==0){
            findans(i);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
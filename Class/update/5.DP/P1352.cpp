#include <bits/stdc++.h>
using namespace std;
int n;
int head[6005],cnt,f[6005][2],ans,is_h[6005],vis[6005];
struct edge{
    int v,next;
}e[6005];
void add(int u,int v){
    e[++cnt].v=v;
    e[cnt].next=head[u];
    head[u]=cnt;
}
void calc(int k){
    vis[k]=1;
    for(int i=head[k];i;i=e[i].next){
        if(vis[e[i].v])
            continue;
        calc(e[i].v);
        f[k][1]+=f[e[i].v][0];
        f[k][0]+=max(f[e[i].v][0],f[e[i].v][1]);
    }
    return;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>f[i][1];
    }
    for(int i=1;i<n;i++){
        int l,k;
        cin>>l>>k;//K是L的直接上司
        is_h[l]=1;
        add(k,l);
    }
    for(int i=1;i<=n;i++){
        if(is_h[i]==0){//从根节点开始，for循环和is_h是为了找到根节点
            calc(i);
            cout<<max(f[i][1],f[i][0]);
            break;
        }
    }

}
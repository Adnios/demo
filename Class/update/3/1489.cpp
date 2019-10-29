#include <bits/stdc++.h>
using namespace std;
struct T{
    long long int u,v,w;
}t[100005];
long long int ans,n,cnt[100005],fa[100005];
long long int find(long long int x){
    if(fa[x]!=x)
        return fa[x]=find(fa[x]);
    else
        return fa[x];
}
bool cmp(T a,T b){
    return a.w<b.w;
}
int main(){
    scanf("%lld",&n);
    for(long long int i=1;i<=n-1;i++){
        scanf("%lld%lld%lld",&t[i].u,&t[i].v,&t[i].w);
        ans+=t[i].w;
    }
    for(long long int i=1;i<=n;i++){
        fa[i]=i;
        cnt[i]=1;
    }
    sort(t+1,t+n,cmp);
    for(long long int i=1;i<=n-1;i++){
        long long int r1=find(t[i].u);
        long long int r2=find(t[i].v);
        if(r1!=r2){
            ans+=(cnt[r1]*cnt[r2]-1)*(t[i].w+1);
            fa[r2]=r1;
            cnt[r1]+=cnt[r2];
        }
    }
    printf("%lld",ans);
}
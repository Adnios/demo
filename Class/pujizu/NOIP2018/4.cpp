#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int n,ans=-1;
int tree[maxn],son[maxn][3],size[maxn];

void dfs(int x){
    size[x]=1;
    if(son[x][1]!=-1)
    {
        dfs(son[x][1]);
        size[x]+=size[son[x][1]];
    }
    if(son[x][2]!=-1)
    {
        dfs(son[x][2]);
        size[x]+=size[son[x][2]];
    }

}

bool check(int l,int r){
    if(l==-1&&r==-1)
        return true;
    if(l!=-1&&r!=-1&&tree[l]==tree[r]&&check(son[l][2],son[r][1])&&check(son[l][1],son[r][2]))
        return true;
    return false;
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&tree[i]);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&son[i][1],&son[i][2]);
    dfs(1);
    for(int i=1;i<=n;i++)
        if(check(son[i][1],son[i][2]))
            ans=max(ans,size[i]);
    printf("%d\n",ans);
    return 0;
}
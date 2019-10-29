#include <bits/stdc++.h>
using namespace std;
#define maxn 100005
int cnt;
int ch[maxn*32][2];
int n;
int a[maxn];
void insert(int x){
    int u=0;
    for(int i=4;i>=0;i--){
        int id=(x>>i)&1;
        if(!ch[u][id])
            ch[u][id]=++cnt;
        u=ch[u][id];
    }
}
int find(int x){
    int u=0;
    int ans=0;
    for(int i=4;i>=0;i--){
        int id=(x>>i)&1;
        if(ch[u][!id]){//如果存在与x这一位数字相反的边
            u=ch[u][!id];
            ans=(ans<<1)|1;//把这一位上的 1 给添加到ans上
        }
        else{//如果不存在
            u=ch[u][id];
            ans=ans<<1;//把0 给添加到ans上
        }
    }
    return ans;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        insert(a[i]);
    }
    int maxx=-1;
    for(int i=1;i<=n;i++){
        maxx=max(maxx,find(a[i]));
    }
    printf("%d\n",maxx);
    return 0;
}
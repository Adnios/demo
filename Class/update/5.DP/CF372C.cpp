#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[2][150001],ans,s;
int n,m,d,p;
int a,b,t[2],q[150001];
int main(){
    scanf("%d%d%d",&n,&m,&d);
    p=0;
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&a,&b,&t[p^1]);
        s+=b;
        ll time=(ll)(t[p^1]-t[p])*d;
        int l=1,r=0;
        for(int j=1;j<=n;j++){
            while(l<=r&&q[l]<j-time)
                l++;
            while(l<=r&&f[p][q[r]]>f[p][j])
                r--;
            q[++r]=j;
            f[p^1][j]=f[p][q[l]]+abs(a-j);
        }
        l=1,r=0;
        for(int j=n;j>0;j--){
            while(l<=r&&q[l]>j+time)
                l++;
            while(l<=r&&f[p][q[r]]>f[p][j])
                r--;
            q[++r]=j;
            f[p^1][j]=min(f[p^1][j],f[p][q[l]]+abs(a-j));
        }
        p=p^1;
    }
    ans=0x3f3f3f3f;
    for(int i=1;i<=n;i++){
        ans=min(ans,f[p][i]);
    }
    printf("%lld\n",s-ans);
}
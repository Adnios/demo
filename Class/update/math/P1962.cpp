#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL m=1e9+7;
LL n=2,k;
struct matrix{
    LL data[105][105];
};
matrix mul(matrix a,matrix b){
    matrix c;
    memset(c.data,0,sizeof(c.data));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                c.data[i][j]=(c.data[i][j]+a.data[i][k]*b.data[k][j]%m)%m;
            }
        }
    }
    return c;
}
matrix quickpow(matrix a,LL k){
    matrix c;
    memset(c.data,0,sizeof(c.data));
    for(int i=1;i<=n;i++)
        c.data[i][i]=1;
    while(k){
        if(k&1)
            c=mul(c,a);
        k>>=1;
        a=mul(a,a);
    }
    return c;
}

int main(){
    scanf("%lld",&k);
    if(k<=2){
        cout<<1<<endl;
        return 0;
    }
    matrix a;
    a.data[1][1]=a.data[1][2]=a.data[2][1]=1;
    a.data[2][2]=0;
    matrix f;
    f.data[1][1]=f.data[2][1]=f.data[1][2]=f.data[2][2]=1;
    matrix ans=quickpow(a,k-2);
    ans=mul(ans,f);
    cout<<ans.data[1][1]<<endl;

}
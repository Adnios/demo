#include <bits/stdc++.h>
using namespace std;
int n,g[305][305],d[305],v[305],mini[305];
const int inf=0x3f3f3f3f;
int getMin(){
    int i,minc=inf,mi=0;
    for(i=1; i<=n; i++){
        if(v[i]==0&&mini[i]<minc){
            minc=mini[i];
            mi=i;
        }
    }
    return mi;
}
int getMin1(){
    int i,minc=inf,mi=0;
    for(i=1; i<=n; i++){
        if(v[i]==0&&d[i]<minc){
            minc=d[i];
            mi=i;
        }
    }
    return mi;
}
int main()
{
    int i,j,k,k1,sum=0,mindianzhan=inf,mi=1;
    memset(mini,inf,sizeof(mini));
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>d[i];
        if(d[i]<mindianzhan){
            mindianzhan=d[i];
            mi=i;
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin>>g[i][j];
        }
    }
    mini[mi]=0;
    for(j=1; j<=n; j++){
        k=getMin();/**< 最小边 */
        k1=getMin1();/**< 最小建站花费 */
        cout<<k<<" "<<k1<<endl;
        if(mini[k]<d[k1]){
            sum+=mini[k];
            v[k]=1;
            for(i=1; i<=n; i++){
                mini[i]=min(mini[i],g[k][i]);
                cout<<mini[i]<<" ";
            }cout<<endl;
        }
        else{
            v[k1]=1;
            sum+=d[k1];
            for(i=1; i<=n; i++){
                mini[i]=min(mini[i],g[k1][i]);
            }
        }
    }
    cout<<sum+d[mi];
    return 0;
}


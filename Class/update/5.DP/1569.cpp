#include <bits/stdc++.h>
using namespace std;
int n;
int a[205];
int dp_max[410][410],dp_min[410][410];
int sum[410];//前缀和
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i+n]=a[i];
    }
    for(int i=1;i<=2*n-1;i++){
        sum[i]=sum[i-1]+a[i];
    }
    for(int len=2;len<=n;len++){
        for(int i=1;i<=2*n-1;i++){
            int j=len+i-1;
            dp_min[i][j]=0x3f3f3f3f;
            for(int k=i;k<j&&k<=2*n-1;k++){
                dp_max[i][j]=max(dp_max[i][j],dp_max[i][k]+dp_max[k+1][j]+sum[j]-sum[i-1]);
                dp_min[i][j]=min(dp_min[i][j],dp_min[i][k]+dp_min[k+1][j]+sum[j]-sum[i-1]);
            }
        }
    }
    int maxx=0,minn=0x3f3f3f3f;
    for(int i=1;i<=n;i++){
        maxx=max(maxx,dp_max[i][n+i-1]);
        minn=min(minn,dp_min[i][n+i-1]);
    }
    cout<<minn<<endl;
    cout<<maxx<<endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,t,x;
#define inf 1000000000+7
int main(){
    cin>>n>>m;
    cin>>t;
    int dp[2*m*n];
    for(int i=0;i<2*m*n;i++){
        dp[i]=0;
    }
    vector<int> v;
    for(int i=0;i<t;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    dp[m]=dp[n]=1;
    for(int i=0;i<t;i++){
        dp[v[i]]=-1;
    }
    int temp=m>n ? m:n;
    for(int i=temp+1;i<=2*m*n;i++){
        if(dp[i]==-1)
            continue;
        if(dp[i-n]==-1&&dp[i-m]==-1)
            dp[i]=dp[i];
        else if(dp[i-n]==-1)
            dp[i]=dp[i-m];
        else if(dp[i-m]==-1)
            dp[i]=dp[i-n];
        else
            dp[i]=dp[i-n]+dp[i-m];

        if(dp[i]>=inf){
            dp[i]=dp[i]%inf;
        }
    }
    cout<<dp[2*m*n]<<endl;
}
#include <bits/stdc++.h>
using namespace std;
int w,v,n;
int a[105],b[105],c[105];
int dp[105][105][105];
string s[105][105][105];
int main(){
    cin>>w>>v>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            for(int k=1;k<=v;k++){
                int bn=dp[i-1][j][k];
                int nn=0;
                if(j>=a[i]&&k>=b[i]){
                    nn=dp[i-1][j-a[i]][k-b[i]]+c[i];
                }
                if(nn>bn){
                    dp[i][j][k]=nn;
                    s[i][j][k]=s[i-1][j-a[i]][k-b[i]]+" "+char(i+'0');
                }
                else{
                    dp[i][j][k]=bn;
                    s[i][j][k]=s[i-1][j][k];
                }
            }
        }
    }
    cout<<dp[n][w][v]<<endl;
    cout<<s[n][w][v].substr(1,s[n][w][v].size()-1);
}
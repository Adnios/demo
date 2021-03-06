//
// Created by adnois on 19-5-21.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        // vector<int> dp(n+1,0);
        int dp[n+1]={0};
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]+=dp[j-1]*dp[i-j];
            }
        }
        return dp[n];
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int ans=s.numTrees(n);
    cout<<ans;
}
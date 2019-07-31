//
// Created by adnois on 19-7-31.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        for(int i=0;i<n+1;i++){
            dp[i]=i;
        }
        for(int i=0;i<n+1;i++){
            int j=1;
            while(i-j*j>=0){
                dp[i]=min(dp[i-j*j]+1,dp[i]);
                j++;
            }
        }

        return dp[n];
    }
};

int main(){
    Solution s;
    cout<<s.numSquares(13)<<endl;
    return 0;
}

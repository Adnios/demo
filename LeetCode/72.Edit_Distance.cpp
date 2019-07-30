//
// Created by adnois on 19-7-30.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int l1=word1.size(),l2=word2.size();
        int dp[l1+1][l2+1];
        for(int i=0;i<=l1;i++)
            dp[i][0]=i;
        for(int j=1;j<=l2;j++)
            dp[0][j]=j;
        for(int i=1;i<=l1;i++) {
            for (int j = 1; j <= l2; j++) {
                if (word1[i-1] == word2[j-1])
                    dp[i][j] = 1 + min(dp[i - 1][j - 1] - 1, min(dp[i - 1][j], dp[i][j - 1]));
                else
                    dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
            }
        }
//        for(int i=0;i<=l1;i++){
//            for(int j=0;j<=l2;j++){
//                cout<<dp[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        return dp[l1][l2];
    }
};

int main(){
    string word1="horse",word2="ros";
    Solution s;
    cout<<s.minDistance(word1,word2);
    return 0;
}

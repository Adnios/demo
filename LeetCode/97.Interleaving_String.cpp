//
// Created by adnois on 19-8-7.
//
#include <iostream>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int l1=s1.size(),l2=s2.size(),l3=s3.size();
        if(l3!=l1+l2)
            return false;
        bool dp[l1+1][l2+1];
        for(int i=0;i<=l1;i++){
            for(int j=0;j<=l2;j++){
                if(i==0&&j==0){
                    dp[i][j]=true;
                }else if(i==0){
                    dp[i][j]=dp[i][j-1]&&(s2[j-1]==s3[i+j-1]);
                }else if(j==0){
                    dp[i][j]=dp[i-1][j]&&(s1[i-1]==s3[i+j-1]);
                }else{
                    dp[i][j]=((dp[i-1][j]&&s1[i-1]==s3[i+j-1])||(dp[i][j-1]&&s2[j-1]==s3[i+j-1]));
                }
            }
        }
        return dp[l1][l2];
    }
};

int main(){
    string s1="aabcc",s2="dbbca",s3="aadbbcbcac";
    Solution s;
    cout<<s.isInterleave(s1,s2,s3);
    return 0;
}

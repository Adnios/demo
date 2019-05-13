//
// Created by adnois on 19-5-13.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size()+1,vector<int>(p.size()+1,0));
        //将s,p的第0为空出，默认相同字符
        dp[0][0]=1;
        //第一行初始化
        for(int i=1;i<=p.size();i++){
            if(p[i-1]=='*'){
                dp[0][i]=dp[0][i-1];
            }
        }
        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=p.size();j++){
                if(p[j-1]=='*'){
                    dp[i][j]=dp[i-1][j]||dp[i][j-1]||dp[i-1][j-1];
                }
                else{
                    dp[i][j]=dp[i-1][j-1]&&(s[i-1]==p[j-1]||p[j-1]=='?');
                }
            }
        }
        return dp[s.size()][p.size()]==1;
    }
};
int main(){
    Solution solution;
    string s,p;
    cin>>s>>p;
    cout<<solution.isMatch(s,p);
}


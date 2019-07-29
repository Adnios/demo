//
// Created by adnois on 19-7-29.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int dp[row][col];
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(i==row-1&&j==col-1)
                    dp[i][j]=grid[i][j];
                else if(i==row-1&&j<col-1)
                    dp[i][j]=grid[i][j]+dp[i][j+1];
                else if(i<row-1&&j==col-1)
                    dp[i][j]=grid[i][j]+dp[i+1][j];
                else
                    dp[i][j]=grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};
int main(){
    Solution s;
    vector<vector<int>> grid;
    int a[3][3]={
            1,3,1,
            1,5,1,
            4,2,1
    };
    for(int i=0;i<3;i++){
        vector<int> v;
        for(int j=0;j<3;j++){
            v.push_back(a[i][j]);
        }
        grid.push_back(v);
    }
    cout<<s.minPathSum(grid)<<endl;
    return 0;
}
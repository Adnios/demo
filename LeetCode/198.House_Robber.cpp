//
// Created by adnois on 19-8-2.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        if(l==0){
            return 0;
        }
        if(l==1){
            return nums[0];
        }
        int dp[l];
        dp[0]=nums[0];dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<l;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[l-1];
    }
};
int main(){
    int n[]={2,3,2};
    vector<int> nums(n,n+3);
    Solution s;
    cout<<s.rob(nums)<<endl;
    return 0;
}
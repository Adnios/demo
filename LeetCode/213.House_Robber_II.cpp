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
        if(l==2){
            return max(nums[0],nums[1]);
        }
        int dp[l-1],dp2[l];
        dp[0]=nums[0];dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<l-1;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
//        cout<<dp[l-2]<<endl;
        dp2[0]=0;dp2[1]=nums[1];
        for(int i=2;i<l;i++){
            dp2[i]=max(dp2[i-1],dp2[i-2]+nums[i]);
        }
//        cout<<dp2[l-1]<<endl;
        return max(dp[l-2],dp2[l-1]);
    }
};
int main(){
    int n[]={1,2,1,1};
    vector<int> nums(n,n+4);
    Solution s;
    cout<<s.rob(nums)<<endl;
    return 0;
}
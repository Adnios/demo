//
// Created by adnois on 19-5-24.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int ans=1;
        int tempans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                ans=max(ans,tempans);
                tempans=1;
            }
            else{
                tempans++;
            }

        }
        ans=max(ans,tempans);
        return ans;
    }
};
int main(){
    int n[]={1,3,5,7};
    vector<int> nums(n,n+4);
    Solution s;
    cout<<s.findLengthOfLCIS(nums);
}

//
// Created by adnois on 2019/9/6.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0;i--){
            ans=ans+nums[i]-nums[0];
        }
        return ans;
    }
};
int main(){
    int n[]={1,2,3};
    vector<int> nums(n,n+3);
    Solution s;
    cout<<s.minMoves(nums)<<endl;
    return 0;
}
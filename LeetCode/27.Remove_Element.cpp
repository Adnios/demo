//
// Created by adnois on 2019/9/7.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i]=INT_MAX;
                ans++;
            }
        }

        sort(nums.begin(),nums.end());
        return nums.size()-ans;
    }
};

int main(){
    int n[]={0,1,2,2,3,0,4,2};
    vector<int> nums(n,n+8);
    int val=2;
    Solution s;
    cout<<s.removeElement(nums,val);
    return 0;
}

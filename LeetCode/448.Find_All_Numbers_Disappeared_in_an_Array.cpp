//
// Created by adnois on 19-7-30.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int max=nums.size();
        int hashmap[max+1];
        for(int i=1;i<=max;i++){
            hashmap[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            hashmap[nums[i]]=-1;
        }
        for(int i=1;i<=max;i++){
            if(hashmap[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};
int main(){
    int a[]={1,1};
    vector<int> nums(a,a+2);
    Solution s;
    vector<int> ans=s.findDisappearedNumbers(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

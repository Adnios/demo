//
// Created by adnois on 19-8-1.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int l=nums.size();
        if(l<=1){
            return l;
        }
        int dp[l],s=0;
        for(int i=0;i<l;i++){
            int left=0,right=s;
            while(left<right){
                int mid=(left+right)/2;
                if(nums[i]<dp[mid]){
                    right=mid;
                }else if(nums[i]>dp[mid]){
//                    cout<<"二分"<<nums[i]<<endl;
                    left=mid+1;
                }else{
                    right=mid;
                }
            }
            dp[left]=nums[i];
            if(left==s){
                s++;
            }
        }
        return s;
    }
};

int main(){
    int n[]={4,10,4,3,8,9};
    vector<int> nums(n,n+6);
    Solution s;
    cout<<s.lengthOfLIS(nums);
    return 0;
}

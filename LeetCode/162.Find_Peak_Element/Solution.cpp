//
// Created by adnois on 19-5-23.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return left;
    }
};

int main(){
    Solution s;
    int n[]={1,2,3,4};
    vector<int> nums(n,n+4);
    cout<<s.findPeakElement(nums);

}
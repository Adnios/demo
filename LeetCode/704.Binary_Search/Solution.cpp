//
// Created by adnois on 19-5-26.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    int n[]={-1,0,3,5,9,12};
    vector<int> nums(n,n+6);
    int target=2;
    cout<<s.search(nums,target);
}
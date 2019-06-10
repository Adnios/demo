//
// Created by adnois on 19-6-10.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0){
            return 1;
        }
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                return mid;
            }
        }
//        cout<<mid<<endl;
        return nums[mid]>target? mid:mid+1;
    }
};

int main(){
    int n[]={1};
    vector<int> nums(n,n+1);
    int target=0;
    Solution s;
    cout<<s.searchInsert(nums,target);

}

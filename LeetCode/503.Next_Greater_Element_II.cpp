//
// Created by adnois on 19-9-4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int len=nums.size();
        for(int i=0;i<nums.size();i++){
            int temp=len,cur=(i+1)%len;
            while(temp--){
                if(nums[cur]>nums[i]){
                    ans.push_back(nums[cur]);
                    break;
                }
                else{
                    cur=(cur+1)%len;
                }
            }
            if(temp==-1){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
int main(){
    int n[]={1,2,1};
    vector<int> nums(n,n+3);
    Solution s;
    vector<int> ans=s.nextGreaterElements(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

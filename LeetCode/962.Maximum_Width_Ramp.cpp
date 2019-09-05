//
// Created by adnois on 19-9-1.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
 * 6,0,8,2,1,5
 * 0,1,2,3,4,5
 * sort
 * 0,1,2,5,6,8
 * 1,4,3,5,0,2
 * 求1,4,3,5,0,2中的最大差
 * */

class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        vector<pair<int,int>> arr;
        for(int i=0;i<A.size();i++){
            arr.emplace_back(A[i],i);
        }
        sort(arr.begin(),arr.end());
        int maxLength = 0;
        int curr_index=arr[0].second;
        for(int i=0;i<arr.size();i++){
            if(arr[i].second>curr_index){
                maxLength=max(maxLength,arr[i].second-curr_index);
            }
            else{
                curr_index=arr[i].second;
            }
        }
        return maxLength;
    }
};

int main(){
    int a[]={6,0,8,2,1,5};
    vector<int> A(a,a+6);
    Solution s;
    cout<<s.maxWidthRamp(A);
    return 0;
}

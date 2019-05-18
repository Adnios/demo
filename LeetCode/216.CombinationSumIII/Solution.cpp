//
// Created by adnois on 19-5-18.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subAns;
    void run(int k,int n,int start){
        if(k==0){
            if(n==0){
                ans.push_back(subAns);
            }
            return ;
        }
        for(int i=start;i<=9;i++){
            subAns.push_back(i);
            run(k-1,n-i,i+1);
            subAns.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        run(k,n,1);
        return ans;
    }
};
int main(){
    int k,n;
    cin>>k>>n;
    Solution s;
    vector<vector<int>> ans=s.combinationSum3(k,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<k;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
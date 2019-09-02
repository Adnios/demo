//
// Created by adnois on 19-9-2.
//
#include <iostream>
#include <vector>
using namespace std;
/*
* 回溯
* */
class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return ans;

    }
    void backtrack(string cur,int open,int close,int max){
        if(cur.size()==max*2){
            ans.push_back(cur);
            return;
        }
        if(open<max)
            backtrack(cur+"(",open+1,close,max);
        if(close<open)
            backtrack(cur+")",open,close+1,max);
    }
};

int main(){
    Solution s;
    vector<string> v=s.generateParenthesis(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}

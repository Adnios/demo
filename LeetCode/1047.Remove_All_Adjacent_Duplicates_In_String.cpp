//
// Created by adnois on 2019/9/7.
//
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    string removeDuplicates(string S) {
        int n=S.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(!st.empty()&&st.top()==S[i]){
                st.pop();
            }
            else{
                st.push(S[i]);
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};
int main(){
    Solution s;
    cout<<s.removeDuplicates("abbaca");
    return 0;
}

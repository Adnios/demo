//
// Created by adnois on 19-5-17.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> a;
        string s="";
        for(int i=0;i<A.size();i++){
            if(A[i]==' '){
                a.push_back(s);
                s="";
            }
            else{
                s+=A[i];
            }
        }
        a.push_back(s);
        s="";
        for(int i=0;i<B.size();i++){
            if(B[i]==' '){
                a.push_back(s);
                s="";
            }
            else{
                s+=B[i];
            }
        }
        a.push_back(s);
        s="";
//        for(int i=0;i<a.size();i++){
//            cout<<a[i]<<endl;
//        }
        vector<string> ans;
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                if(i!=j&&a[i]==a[j]){
                    break;
                }
            }
            if(j==a.size()){
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};
int main(){
    string A,B;
    A="this apple is sweet";B="this apple is sour";
//    cin>>A>>B;
    Solution s;
    vector<string> ans=s.uncommonFromSentences(A,B);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
//
// Created by adnois on 2019/9/9.
//
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reorganizeString(string S) {
        int hash[26];
        for(int i=0;i<26;i++){
            hash[i]=0;
        }
        int len=S.length();
        for(int i=0;i<len;i++){
            hash[S[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]>(len+1)/2){
                S="";
                return S;
            }
        }
        string ans="";
        while(1){
//            cout<<"ans_b:"<<ans<<endl;
            int index=findMax(hash);
            ans+='a'+index;
            hash[index]--;
            len--;
            if(len==0)
                break;
            for(int i=0;i<26;i++){
                if(hash[i]!=0&&i!=index){
                    ans+='a'+i;
                    hash[i]--;
                    len--;

                    break;
                }
            }
            if(len==0)
                break;
//            cout<<"ans_e:"<<ans<<endl;
        }
        return ans;
    }
    int findMax(int hash[]){
        int index=0;
        int max=hash[0];
        for(int i=1;i<26;i++){
            if(hash[i]>max){
                index=i;
                max=hash[i];
            }
        }
        return index;
    }
};

int main(){
    Solution s;
    string str="vvvlo";
    cout<<s.reorganizeString(str);
    return 0;
}


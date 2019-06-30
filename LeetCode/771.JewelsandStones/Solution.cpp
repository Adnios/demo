//
// Created by adnois on 19-6-30.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int sum=0;
        for(int i=0;i<S.size();i++){
            for(int j=0;j<J.size();j++){
                if(S[i]==J[j]){
                    sum++;
                    break;
                }
            }
        }
        return sum;
    }
};
int main(){
    string J="aA";
    string S="aAAfffff";
    Solution s;
    cout<<s.numJewelsInStones(J,S);
}

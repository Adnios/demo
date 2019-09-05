//
// Created by adnois on 19-9-5.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        int temp=x^y;
        while(temp){
            if(temp&1==1){
                ans++;
            }
            temp=temp>>1;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.hammingDistance(1,4);
    return 0;
}

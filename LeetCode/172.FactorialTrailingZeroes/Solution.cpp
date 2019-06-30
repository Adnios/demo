//
// Created by adnois on 19-6-30.
//
#include <iostream>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        while(n){
            n=n/5;
            sum=sum+n;
        }
        return sum;
    }
};

int main(){
    Solution s;
    cout<<s.trailingZeroes(125);

}

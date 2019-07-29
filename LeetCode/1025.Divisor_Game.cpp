//
// Created by adnois on 19-7-29.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool divisorGame(int N) {
        if(N%2==0)
            return true;
        else
            return false;
    }
};
int main(){
    Solution s;
    cout<<s.divisorGame(3)<<endl;

    return 0;
}

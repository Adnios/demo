//
// Created by adnois on 19-8-10.
//
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int h=0;h<12;h++){
            for(int m=0;m<60;m++){
                if(bitset<10>(h<<6|m).count()==num){
                    res.push_back(to_string(h)+(m<10?":0":":")+to_string(m));
                }
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<string> v=s.readBinaryWatch(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

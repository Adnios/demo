//
// Created by adnois on 2019/9/8.
//
#include <iostream>
#include <stdio.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        int len=address.length();
        while(len--){
            if(address[i+1]=='.'){
                address.insert(i+1,1,'[');
                i++;
            }
            else if(address[i]=='.'){
                address.insert(i+1,1,']');
                i++;
            }
            i++;
        }
        return address;
    }
};
int main(){
    string address="255.100.50.0";
    Solution s;
    cout<<s.defangIPaddr(address)<<endl;
    return 0;
}

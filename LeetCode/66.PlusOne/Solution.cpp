//
// Created by adnois on 19-6-30.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
        if(l==0){
            if(digits[0]<9){
                digits[0]++;
            }
            else{
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
            }
            return digits;
        }
        while(l>0){
            if(digits[l]<9&&digits.size()-1==l){
                digits[l]++;
                return digits;
            } else if(digits[l]==9&&digits.size()-1==l){
                digits[l]=0;
                digits[l-1]++;
                l--;
            }else{
                if(digits[l]>=10){
                    digits[l]=0;
                    digits[l-1]++;
                    l--;
                }else{
                    break;
                }
            }
        }
        if(digits[0]>=10){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main(){
    int a[]={2,4,9,3,9};
    vector<int> v(a,a+5);
    Solution s;
    vector<int> vector=s.plusOne(v);
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<" ";
    }
}
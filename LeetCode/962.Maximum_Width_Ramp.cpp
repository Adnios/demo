//
// Created by adnois on 19-9-1.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        int result = 0;
        for (int i = 0; i < A.size(); i++) {
            for (int j = A.size() -1; j > i; j--) {
                if (A[j] >= A[i] && j - i > result) {
                    result = j - i;
                    break;
                }
            }
        }
        return result;
    }
};

int main(){
    int a[]={6,0,8,2,1,5};
    vector<int> A(a,a+6);
    Solution s;
    cout<<s.maxWidthRamp(A);
    return 0;
}

//
// Created by adnois on 19-6-28.
//
#include <iostream>
using namespace std;
//使用long long
class Solution {
public:
    int mySqrt(int x) {
        long long low=0;
        long long high=x;
        long long mid=(low+high)/2;
        if(x==1){
            return 1;
        }
        while(low<high){
            if(high-low<=1){
                return low;
            }
            cout<<"mid"<<mid<<endl;
            mid=(low+high)/2;
            if(mid*mid==x){
                cout<<high<<" "<<low<<endl;
                return mid;
            }else if(mid*mid<x){
                cout<<high<<" "<<low<<endl;
                low=mid;
            } else{
                cout<<high<<" "<<low<<endl;
                high=mid;
            }
        }
        return mid;
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.mySqrt(n);
}

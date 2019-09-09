//
// Created by adnois on 2019/9/8.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum=0;
        for(int i=0;i<distance.size();i++){
            sum+=distance[i];
        }
        int ans=0;
        int s=min(start,destination);
        int d=max(start,destination);
//        cout<<start<<" "<<destination<<endl;
        for(int i=s;i<d;i++){
            ans+=distance[i];
        }
        return min(ans,sum-ans);
    }
};
int main(){
    Solution s;
    int n[]={7,10,1,12,11,14,5,0};
    vector<int> d(n,n+8);
    cout<<s.distanceBetweenBusStops(d,7,2);
    return 0;
}

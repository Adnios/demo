//
// Created by adnois on 19-4-22.
//
//自定义sort，从大到小排列
/*
 * sort时间复杂度为nlogn
 *
 * */
#include <iostream>
#include <algorithm>

using namespace std;
bool cmp (int x,int y){
    return x>y;
}
int main() {
    int n;
    int buf[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>buf[i];
    }
    sort(buf,buf+n,cmp);
    for(int i=0;i<n;i++){
        cout<<buf[i]<<" ";
    }
    return 0;
}
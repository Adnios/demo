//
// Created by adnois on 19-4-28.
//
/**
题目描述:
给你 n 个整数,请按从大到小的顺序输出其中前 m 大的数。
输入:
每组测试数据有两行,第一行有两个数 n,m(0<n,m<1000000),第二行包含 n
个各不相同,且都处于区间[-500000,500000]的整数。
输出:
对每组测试数据按从大到小的顺序输出前 m 大的数。
样例输入:
5 3
3 -35 92 213 -644
样例输出:
213 92 3
 * */
#include <iostream>
using namespace std;
#define OFFSET 500000
int Hash[1000001];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=-500000;i<=500000;i++){
        Hash[i+OFFSET]=0;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Hash[x+OFFSET]=1;
    }
    for(int i=500000;i>=-500000;i--){
        if(Hash[i+OFFSET]==1){
            cout<<i;
            m--;
            if(m) {
                cout << " ";
            } else{
                cout<<endl;
                break;
            }
        }
    }
}

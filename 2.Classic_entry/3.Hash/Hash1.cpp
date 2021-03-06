//
// Created by adnois on 19-4-28.
//
/**
 *
题目描述:
读入 N 名学生的成绩,将获得某一给定分数的学生人数输出。
输入:
测试输入包含若干测试用例,每个测试用例的格式为
第 1 行:N
第 2 行:N 名学生的成绩,相邻两数字用一个空格间隔。
第 3 行:给定分数
当读到 N=0 时输入结束。其中 N 不超过 1000,成绩分数为(包含)0 到 100
之间的一个整数。
输出:
对每个测试用例,将获得给定分数的学生人数输出。
样例输入:
3
80 60 90
60
2
85 66
0
5
60 75 90 55 75
75
0
样例输出:
1
0
2
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        int Hash[101]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            Hash[x]++;
        }
        int x;
        cin>>x;
        cout<<Hash[x]<<endl;
        cin>>n;
    }
    return 0;
}

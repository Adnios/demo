//
// Created by adnois on 19-4-28.
//
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct E {
    char name[101];
    int age;
    int score;
    bool operator < (const E &b) const{
        if(score!=b.score) return score<b.score;
        int tmp=strcmp(name,b.name);
        if(tmp!=0) return tmp<0;
        else return age<b.age;
    }
}buf[1000];
int main () {
    int n;
    while (scanf ("%d",&n) != EOF) {
        for (int i = 0;i < n;i ++) {
            scanf ("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        } // 输入
        sort(buf,buf + n); //利用自己定义的规则对数组进行排序
        for (int i = 0;i < n;i ++) {
            printf ("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        } //输出排序后结果
    }
    return 0;
}

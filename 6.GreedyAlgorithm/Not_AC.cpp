//
// Created by adnois on 19-4-30.
//
/**
 题目描述:
“ 今 年 暑 假 不 AC ? ”“ 是 的 。 ”“ 那 你 干 什 么 呢 ? ”“ 看 世 界 杯 呀 , 笨
蛋! ”“@#$%^&*%...”确实如此,世界杯来了,球迷的节日也来了,估计很多 ACMer
也会抛开电脑,奔向电视作为球迷,一定想看尽量多的完整的比赛,当然,作为
新时代的好青年,你一定还会看一些其它的节目,比如新闻联播(永远不要忘记
关心国家大事)、非常 6+7、超级女生,以及王小丫的《开心辞典》等等,假设
你已经知道了所有你喜欢看的电视节目的转播时间表,你会合理安排吗?(目标
是能看尽量多的完整节目)
输入:
输入数据包含多个测试实例,每个测试实例的第一行只有一个整数
n(n<=100),表示你喜欢看的节目的总数,然后是 n 行数据,每行包括两个数据
Ti_s,Ti_e (1<=i<=n),分别表示第 i 个节目的开始和结束时间,为了简化问题,每
个时间都用一个正整数表示。n=0 表示输入结束,不做处理。
输出:
对于每个测试实例,输出能完整看到的电视节目的个数,每个测试实例的输
出占一行。
样例输入:
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0
样例输出:
5*/
/*最优解中,第一个观看的节目一定是所有节目里结束时间最早的节目。*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class program{
public:
    int startTime;
    int endTime;
    bool operator <<(const program &A) const{
        return endTime<A.endTime;
    }
};
int main(){
    int n;
    cin>>n;
    program program1[n];
    for(int i=0;i<n;i++){
        cin>>program1[i].startTime>>program1[i].endTime;
    }
    sort(program1,program1+n);
    int ans=0;
    int

}
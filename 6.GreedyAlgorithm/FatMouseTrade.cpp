//
// Created by adnois on 19-4-29.
//
/**
 题目描述:
FatMouse prepared M pounds of cat food, ready to trade with the cats guarding
the warehouse containing his favorite food, JavaBean.
The warehouse has N rooms. The i-th room contains J[i] pounds of JavaBeans
and requires F[i] pounds of cat food. FatMouse does not have to trade for all the
JavaBeans in the room, instead, he may get J[i]* a% pounds of JavaBeans if he pays
F[i]* a% pounds of cat food. Here a is a real number. Now he is assigning this
homework to you: tell him the maximum amount of JavaBeans he can obtain.
输入:
The input consists of multiple test cases. Each test case begins with a line
containing two non-negative integers M and N. Then N lines follow, each contains
two non-negative integers J[i] and F[i] respectively. The last test case is followed by
two -1's. All integers are not greater than 1000.
输出:
For each test case, print in a single line a real number accurate up to 3 decimal
places, which is the maximum amount of JavaBeans that FatMouse can obtain.
样例输入:
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1
样例输出:
13.333
31.500
 * */
#include <iostream>
#include <algorithm>

using namespace std;
class goods{
public:
    double weight;//重量
    double value;//价值
    double costPerformance;//性价比
    bool operator <(const goods &A)const{
        return costPerformance>A.costPerformance;//性价比降序
    }
};
int main(){
    double m;
    int n;
    double ans=0;
    cin>>m>>n;
    goods g[n];
    for(int i=0;i<n;i++){
        cin>>g[i].weight>>g[i].value;
        g[i].costPerformance=g[i].weight/g[i].value;
    }
    sort(g,g+n);
    for(int i=0;i<n;i++){
        if(m>g[i].value){
            ans+=g[i].weight;
            m-=g[i].value;
        }
        else{
            ans+=m*g[i].costPerformance;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
//
// Created by adnois on 19-4-29.
//
/**
题目描述:
输入 N 个学生的信息,然后进行查询。
输入:输入的第一行为 N,即学生的个数(N<=1000)
接下来的 N 行包括 N 个学生的信息,信息格式如下:
01 李江 男 21
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
然后输入一个 M(M<=10000),接下来会有 M 行,代表 M 次查询,每行输入
一个学号,格式如下:
02
03
01
04
输出:
输出 M 行,每行包括一个对应于查询的学生的信息。
如果没有对应的学生信息,则输出“No Answer!”
样例输入:
4
01 李江 男 21
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
5
02
03
01
04
03
样例输出:
02 刘唐 男 23
03 张军 男 19
01 李江 男 21
04 王娜 女 19
03 张军 男 19
 排序O(nlogn),二分查找O(logn)
 */
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
class Student{
public:
    char no[100];
    char name[100];
    char sex[5];
    int age;
    bool operator <(const Student &A) const{
        return strcmp(no,A.no)<0;
    }
};
int main(){
    Student student[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>student[i].no>>student[i].name>>student[i].sex>>student[i].age;
    }
    sort(student,student+n);
    for(int i=0;i<n;i++){
        cout<<student[i].no<<student[i].name<<student[i].sex<<student[i].age<<endl;
    }
//    简化，只查询一次
    char no[100];
    cin>>no;//输入char类型数组，char *no;cin>>no;这样是不行的
    int top=n-1,base=0;
    while(top>=base){
        if(strcmp(student[(top+base)/2].no,no)==0){
            cout<<student[(top+base)/2].no<<" "<<student[(top+base)/2].name<<" "<<student[(top+base)/2].sex<<" "<<student[(top+base)/2].age<<endl;
            break;
        }
        else if(strcmp(student[(top+base)/2].no,no)>0){
            top=(top+base)/2-1;
        }
        else {
            base=(top+base)/2+1;
        }
    }
    if(top<base){
        cout<<-1<<endl;
    }
    return 0;
}
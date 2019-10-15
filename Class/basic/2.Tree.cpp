//
// Created by scrutiny on 2019/10/4.
//
#include<iostream>
using namespace std;
string s1,s2;
void calc(int l1,int r1,int l2,int r2)
{
    int i,j;
    for(i=l2;i<=r2;i++)//找层次遍历中优先输出根节点的位置
    {
        int flag=0;
        for(j=l1;j<=r1;j++)
        {
            if(s2[i]==s1[j])
            {
                cout<<s1[j];//输出根节点
                flag=1;
                break;
            }
        }
        if(flag!=0)
            break;
    }
    if(j>l1)
        calc(l1,j-1,0,r2);//遍历左子树
    if(j<r1)
        calc(j+1,r1,0,r2);//遍历右子树
}
int main(){
    cin>>s1>>s2;
    calc(0,s1.length()-1,0,s2.length()-1);
    cout<<endl;
    return 0;
}

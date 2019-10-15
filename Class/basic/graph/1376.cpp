//
// Created by adnois on 19-4-27.
//
#include <iostream>
#include <climits>
#include<string>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;//输入节点数和边数
    int graph[n1][n1];
//    初始化，对角线上为0，其他为INT_MAX/2,不能等于INT_MAX,否则使用floyed算法会溢出
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            graph[i][j]=(i==j)?0:INT_MAX/2;
        }
    }
//    输入每条边的长度
    int row,col,val;
    for(int i=0;i<n2;i++){
        cin>>row>>col>>val;
        graph[row-1][col-1]=val;
        graph[col-1][row-1]=val;
    }

//    Floyed算法
    for(int k=0;k<n1;k++){
        for(int i=0;i<n1;i++){
            for(int j=0;j<n1;j++){
                if(graph[i][j]>(graph[i][k]+graph[k][j])){
                    graph[i][j]=(graph[i][k]+graph[k][j]);//核心代码
                }
            }
        }
    }

    int ans=0;
    int tag=0;
    for(int i=1;i<n1;i++)
    {
        ans=max(ans,graph[0][i]);
        if(graph[1][i]==INT_MAX/2)
        {
            tag=1;
            break;
        }
    }
    if(tag)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;

}
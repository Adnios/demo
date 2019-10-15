#include<iostream>
#include<algorithm>
const int N = 1000+5;
using namespace std;
int a[N];
bool vis[N];
int cnt;
bool cmp(int x,int y){
    return x>y;
}
bool dfs(int k,int step,int rest,int len){
    //k为已经拼接好的个数,step为上一个的编号,rest为剩余的长度,len为木棍的长度
    if(k==cnt+1 && rest==0)//拼接好个数为要求数且无剩余
        return true;
    else if(k==cnt+1)//拼接好个数为要求数但有剩余
        return false;
    else if(rest==0){//拼接好个数不为要求数但无剩余，重新开始
        rest=len;//剩余数变为长度
        step=0;//编号归零
    }

    for(int i=step+1;i<=cnt;i++){
        if(!vis[i]){
            if(rest-a[i]>=0){//保证剩余值不为负数
                vis[i]=true;
                if(dfs(k+1,i,rest-a[i],len))
                    return true;
                vis[i]=false;
                if(a[i]==rest || len==rest)//头尾剪枝，此时已在回溯之后，需要判断头尾两种情况
                    break;
                while(a[i]==a[i+1])//去重剪枝，用当前长度搜索无结果时，对同样长度的可以忽略
                    i++;
            }
        }
    }

    return false;
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x<=50){
            a[++cnt]=x;
            sum+=x;
        }
    }
    sort(a+1,a+1+n,cmp);
    for(int i=a[1];i<=sum;i++){
        if(sum%i==0){
            if(dfs(1,0,i,i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
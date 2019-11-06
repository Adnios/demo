#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int ans,len;
int a[12];
int f[12][12];//f[i][j]表示i位数中最高位为j的方案数

int solve(int x){
    if(x<=0)
        return 0;
    ans=0; len=0;
    while(x) {
        a[++len]=x%10;
        x/=10;
    }
    //1 达不到len位的所有情况
    for(int i=len-1;i;i--)
        for(int j=1;j<=9;j++)
            ans+=f[i][j];//前面位数全部取0，即高位没有数
    //2 达到len位但最高位取不到极限的所有情况
    for(int i=1;i<a[len];i++)
        ans+=f[len][i];//计算最高位达不到极限的所有情况，显然都可行
    //3 达到len为且最高位取极限的所有情况，从len-1到1一路累加答案，枚举到第i位时，默认为i+1到len都取得是极限
    for(int i=len-1;i;i--) {//计算每一位取极限的值，一路往下累加答案
        for(int j=0;j<a[i];j++)
            if(abs(a[i+1]-j)>=2)
                ans+=f[i][j];//似乎可以取0
        if(abs(a[i+1]-a[i])<2)
            break;//高位都取极限已经不满足windy数性质，直接break
    }
    return ans;
}
int main(){
    int sx,sy;
    cin>>sx>>sy;
    for(int i=0;i<=9;i++)
        f[1][i]=1;//记得算0
    for(int i=2;i<=10;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
                if(abs(j-k)>=2)
                    f[i][j]+=f[i-1][k];


    for(int i=1;i<=10;i++){
        for(int j=0;j<=9;j++){
            cout<<f[i][j]<<" ";
        }cout<<endl;
    }  cout<<endl;
    printf("%d",solve(sy+1)-solve(sx));
    return 0;
}
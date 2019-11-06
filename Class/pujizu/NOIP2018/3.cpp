#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define N 510
#define M 210
using namespace std;
int n,m,t[N],s[N][N],f[N][M],ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>t[i];
    sort(t+1,t+1+n);
    for(int i=1;i<n;i++)//预处理s
        for(int j=i+1;j<=n;j++)
            for(int k=i;k<j;k++)
                s[i][j]+=t[j]-t[k];//表示第i个人到第j个人做同一辆车的等待时间
    memset(f,0x3f3f3f3f,sizeof(f));//在i个人到达后发车，第i个人等了j分钟时的最小等待时间。
    t[0]=-2e9;
    for(int i=0;i<=m;i++)//初始化
    {
        f[0][i]=0;
        f[1][i]=i;
    }
    for(int i=2;i<=n;i++)//dp
        for(int j=0;j<i;j++)
            for(int k=0;k<=m;k++)
            {
                int w=t[j]+k+m-t[i];
                if(w>0)
                    f[i][w]=min(f[i][w],f[j][k]+s[j+1][i]+(i-j)*w);
                else//特判防越界
                    f[i][0]=min(f[i][0],f[j][k]+s[j+1][i]);
            }
    ans=2e9;
    for(int i=0;i<=m;i++)
        ans=min(ans,f[n][i]);
    printf("%d\n",ans);
}
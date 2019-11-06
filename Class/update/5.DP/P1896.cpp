#include<cstdio>
#define STEP 512
using namespace std;
long long f[10][101][STEP],ans;
int m,n,num,i,j,now,k,stay[101],cnt[101]; //stay记录每种状态压缩后的值，cnt记录对应的状态中1的个数。
bool map[101][101];
void dfs(int k,int put,int now)  //预处理，k是放了几颗，put是当前放的位置，now是当前状态压缩后的值。
{
    stay[++m]=now;cnt[m]=k;
    if (k>=(n+1)/2||k>=num)
        return;
    for (int i=put+2;i<=n;i++)
        dfs(k+1,i,now+(1<<(i-1)));
}
void init()
{
    dfs(0,-1,0);                 //预处理出每种状态，共有m种。
    for (int i=1;i<=m;i++)
        for (int j=1;j<=m;j++) //枚举某两种状态是否能相邻。一共有三种不能的情况：上下都是1，左上、右下是1，左下、右上是1。
            map[i][j]=map[j][i]=((stay[i]&stay[j])||((stay[i]>>1)&stay[j])||((stay[i]<<1)&stay[j]))?0:1;
        for (int i=1;i<=m;i++)
            f[1][cnt[i]][i]=1ll;    //边界
}
int main(){
    scanf("%d%d",&n,&num);
    init();
    for (i=2;i<=n;i++)
    {
        for (j=0;j<=num;j++)
        {
            for (now=1;now<=m;now++)
            {
                if (cnt[now]>j) continue;
                for (k=1;k<=m;k++)
                    if (map[k][now]&&cnt[k]+cnt[now]<=j) f[i][j][now]+=f[i-1][j-cnt[now]][k]; //转移
            }
        }
    }
    for (i=1;i<=m;i++)
        ans+=f[n][num][i];
    printf("%lld",ans);
    return 0;
}
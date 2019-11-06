#include<cstdio>
#include<algorithm>
#define N 100010
#define lls long long
using namespace std;
lls n,c[N],m,p1,s1,s2,ans1,ans2,mins,mark;
int main()
{
    scanf("%lld",&n);
    for(lls i=1;i<=n;i++)
        scanf("%lld",&c[i]);
    scanf("%lld%lld%lld%lld",&m,&p1,&s1,&s2);
    c[p1]+=s1;
    for(lls i=1;i<m;i++)
        ans1+=c[i]*(m-i);
    for(lls i=m+1;i<=n;i++)
        ans2+=c[i]*(i-m);
    mark=0;
    mins=1e19;
    for(lls i=1;i<m;i++)
    {
        if(abs(ans1+s2*(m-i)-ans2)<mins)
        {
            mark=i;
            mins=abs(ans1+s2*(m-i)-ans2);
        }
    }
    for(lls i=m+1;i<=n;i++)
    {
        if(abs(ans1-ans2-s2*(i-m))<mins)
        {
            mark=i;
            mins=abs(ans1-ans2-s2*(i-m));
        }
    }
    if(mins<abs(ans1-ans2))
        printf("%lld",mark);
    else
        printf("%lld",m);
}

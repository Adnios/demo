#include<bits/stdc++.h>
using namespace std;

const int N=200010;
typedef long long ll;
int n,m,cnt,tot,a[N],s[N][30],trie[N*15][2],dat[N*15][30],siz[N*15];
int cur,lst;

inline void insert(int x)
{
    int p=0;
    for(int i=29,o;~i;i--)
    {
        o=x>>i&1;
        if(!trie[p][o])trie[p][o]=++tot;
        p=trie[p][o];
        siz[p]++;
        for(int j=0;j<30;j++)
            dat[p][j]+=x>>j&1;
    }
}

inline ll cal(int k)
{
    int p=0,val=0;
    ll res=0;
    for(int i=29,o;~i;i--)
    {
        o=lst>>i&1;
        if(siz[trie[p][o]]>=k)p=trie[p][o];
        else
        {
            k-=siz[trie[p][o]];
            val|=1<<i;
            for(int j=0,d;j<30;j++)
            {
                d=dat[trie[p][o]][j];
                if(cur>>j&1)d=siz[trie[p][o]]-d;
                res+=1ll*d<<j;
            }
            p=trie[p][o^1];
        }
    }
    val^=lst^cur;
    return res+1ll*val*k;
}

inline ll query(int l,int r)
{
    ll res=0;
    if(l<=n)res+=cal(min(r,n))-cal(l-1);
    if(r>n)
    {
        l=max(l,n+1);
        for(int i=0;i<30;i++)
        {
            if(cur>>i&1)res+=1ll*(r-l+1-s[r][i]+s[l-1][i])<<i;
            else res+=1ll*(s[r][i]-s[l-1][i])<<i;
        }
    }
    return res;
}

int main()
{
    scanf("%d",&cnt);
    for(int i=1;i<=cnt;i++)
    {
        scanf("%d",&a[i]);
        for(int j=0;j<30;j++)
            s[i][j]=s[i-1][j]+(a[i]>>j&1);
    }
    scanf("%d",&m);
    for(int i=1,op,x,y;i<=m;i++)
    {
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d",&a[++cnt]);
            a[cnt]^=cur;
            for(int j=0;j<30;j++)
                s[cnt][j]=s[cnt-1][j]+(a[cnt]>>j&1);
        }
        else if(op==2)
        {
            scanf("%d%d",&x,&y);
            printf("%lld\n",query(x,y));
        }
        else if(op==3)
            scanf("%d",&x),cur^=x;
        else
        {
            while(n<cnt)insert(a[++n]);
            lst=cur;
        }
    }
    return 0;
}
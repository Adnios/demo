#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int nextt[1004],n,m;
void getNext(){
    nextt[0]=0;
    int len=0;
    int i=1;
    while(i<m){
        if(s2[i]==s2[len]){
            len++;
            nextt[i]=len;
            i++;
        }
        else{
            if(len>0){
                len=nextt[len-1];
            }
            else{//避免死循环
                nextt[i]=len;
                i++;
            }
        }
    }
}
void move_next(){
    for(int i=m-1;i>0;i--){
        nextt[i]=nextt[i-1];
    }
    nextt[0]=-1;
}
int kmp(){
    int ans=0,j=0;
    int i=0;
    while(i<n){
        if(s1[i]==s2[j]){
            i++;j++;
        }
        else{
            j=nextt[j];
            if(j==-1){//j到了-1
                i++;
                j++;
            }
        }
        if(j==m){
            ans++;
            j=0;
        }
    }
    return ans;
}
int main(){
    while(1){
        cin>>s1;
        n=s1.size();
        if(n==1&&s1[0]=='#')
            break;
        cin>>s2;
        m=s2.size();
        getNext();
        move_next();
        printf("%d\n",kmp());
    }
}
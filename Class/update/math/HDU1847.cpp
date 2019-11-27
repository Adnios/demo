#include <bits/stdc++.h>
using namespace std;
const int N=1010;
//f[]：可以取走的石子个数
//sg[]:0~n的SG函数值
//hash[]:mex{}
int f[N],pos=1;//可以取走的石子个数
int sg[N];//0~n的SG函数值
int Hash[N];
int n;
void getSG(int n){
    memset(sg,0,sizeof(sg));
    for(int i = 1; i <= n; i++){
        memset(Hash,0,sizeof(Hash));
        for(int j = 1; f[j] <= i; j++)
            Hash[sg[i-f[j]]] = 1;
        for(int j = 0; j <= n; j++){    //求mes{}中未出现的最小的非负整数
            if(Hash[j] == 0){
                sg[i] = j;
                break;
            }
        }
    }
}
int main(){
    for(int i=1;i<2000;i*=2)
        f[pos++]=i;
    getSG(N);
    while(cin>>n){
        if(sg[n]==0){
            cout<<"Cici"<<endl;
        } else
            cout<<"Kiki"<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
const int maxx=1<<29;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int min=maxx,sum=0;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        sum+=min;
        min+=b[i];
    }
    cout<<sum;
}
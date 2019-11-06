#include <iostream>
using namespace std;
bool dp[10][10]={false};
bool dp_opt(int *array,int n,int s){
    for(int i=0;i<=s;i++){
        if(i==array[0]){
            dp[0][i]=true;
            cout<<"A"<<endl;
        }
        else{
            dp[0][i]= false;
            cout<<"B"<<endl;
        }

    }
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=s;j++){
            if(array[i]>j)
                dp[i][j]=dp[i-1][j];
            else{
                bool a=dp[i-1][j-array[i]];
                bool b=dp[i-1][j];
                dp[i][j]=a||b;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=s;j++){
            cout<<dp[i][j]<<" ";
        }cout<<endl;
    }
    return dp[n-1][s];
}
int main()
{
    int array[6]={3,34,4,12,5,2};
    int s=9;

    cout<<dp_opt(array,6,13)<<endl;
}
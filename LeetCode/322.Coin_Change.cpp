//
// Created by adnois on 2019/9/7.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
///*动态规划,就是穷举*/
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins)
                if (coin <= i)
                    dp[i] = min(dp[i], dp[i - coin] + 1);
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};
int main(){
    int n[]={186,419,83,408};
    vector<int> coins(n,n+4);
    int amount=6249;
    Solution s;
    cout<<s.coinChange(coins,amount);
    return 0;
}

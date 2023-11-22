const int mod = 1e9 + 7;
int fun(int n, vector<int> &coins, vector<int> &freq, int amount, int index,
        int f , vector<vector<vector<int>>> &dp) {
  if (index == n -1) {

    if (amount % coins[index] == 0) {

      int neededCoins = amount / coins[index];

      return f >= neededCoins;
    }

    return 0;
  }

  if (amount == 0)
    return 1;
  if(dp[index][amount][f] != -1) return dp[index][amount][f];
  int take = 0, ntake = 0;
  if (amount >= coins[index] && f != 0) {
    take = fun(n, coins, freq, amount - coins[index], index, f - 1 ,dp);
  }
  ntake = fun(n, coins, freq, amount, index + 1, freq[index + 1] , dp);

  return dp[index][amount][f] =  ((take) % mod + (ntake) % mod) % mod;
}
int coinChange(int n, vector<int> &coins, vector<int> &freq, int v) {
  // Write your code here.
  vector<vector<vector<int>>> dp(105 , vector<vector<int>>(105 , vector<int>(105 , -1)));
  return fun(n, coins, freq, v, 0, freq[0] , dp);
}

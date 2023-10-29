int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight) {
  // Write Your Code Here.
  int dp[n + 1][w + 1];
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < w + 1; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      }
    }
  }
  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < w + 1; j++) {
      if (j >= weight[i - 1]) {
        dp[i][j] = max(profit[i - 1] + dp[i][j - weight[i - 1]], dp[i - 1][j]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  return dp[n][w];
}

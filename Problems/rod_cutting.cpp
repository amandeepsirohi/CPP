int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		arr[i] = i +1;
	}
	int dp[n + 1][n + 1];
	for(int i = 0 ; i< n + 1 ; i++)
	{
		for(int j = 0 ; j < n + 1 ; j++)
		{
			if(i == 0 || j == 0)
			{
				dp[i][j] = 0;
			}
		}
	}
	for(int i = 1 ; i < n + 1 ; i++)
	{
		for(int j = 1 ;  j < n + 1 ; j++)
		{
			if(j >= arr[i - 1])
			{
				dp[i][j] = max(price[i -1] + dp[i][j - arr[i -1]] , dp[i -1][j]);
			}
			else{
				dp[i][j] = dp[i -1][j];
			}
		}
	}
	return dp[n][n];
}

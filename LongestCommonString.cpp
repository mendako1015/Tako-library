// Longest Common String
// O(nm)

int LCS(string s, string t) {
	int n = s.size();
	int m = t.size();
	int dp[n + 10][m + 10] = {0};

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(s[i] == t[j]) {
				dp[i+1][j+1] = dp[i][j] + 1;
			} else {
				dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
			}
		}
	}

	return dp[n][m];
}

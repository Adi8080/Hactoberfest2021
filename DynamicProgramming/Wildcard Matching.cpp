#include<bits/stdc++.h>
using namespace std;

bool wildcardMatch(int i, int j, string &pattern, string &text, vector<vector<int>>&dp) {

//base cases
//1 . if both the strings exhausted
	if (i < 0 and j < 0) return true;
// 2. If string first got exhausted and string 2 has some characters to be match
	if (i<0 and j >= 0) return false;
	/* 3.if string 2 got exhausted and some chars are remaining in the first string then there is observation
	like  according to codestudio problem first string has ? and * but according to leetcode 2 string has ? and *
	so whatever string has ? and * if string other than that is empty then there have to only *
	in the another string because only * will match empty characters so*/
	if (j<0 and i >= 0) {
		for (int k = 0; k <= i; k++ )if (pattern[k] != '*')
				return false;
		return true;
	}
	if (dp[i][j] != -1) return dp[i][j];
//now main logic
// if both the char matched or a single character is matched with ? then move both pointers
	if (pattern[i] == text[j] or pattern[i] == '?') return dp[i][j] = wildcardMatch(i - 1, j - 1, pattern, text, dp);
	if (pattern[i] == '*') return dp[i][j] = (wildcardMatch(i - 1, j, pattern, text, dp) | wildcardMatch(i, j - 1, pattern, text, dp));
	return dp[i][j] = false;

}


/*shifting memoization code */
bool wildcardMatchShifting(int i, int j, string &pattern, string &text, vector<vector<int>>&dp) {

//base cases
//1 . if both the strings exhausted
	if (i == 0 and j == 0) return true;
// 2. If string first got exhausted and string 2 has some characters to be match
	if (i == 0 and j > 0) return false;
	/* 3.if string 2 got exhausted and some chars are remaining in the first string then there is observation
	like  according to codestudio problem first string has ? and * but according to leetcode 2 string has ? and *
	so whatever string has ? and * if string other than that is empty then there have to only *
	in the another string because only * will match empty characters so*/
	if (j == 0 and i > 0) {
		for (int k = 1; k <= i; k++ )if (pattern[k - 1] != '*')
				return false;
		return true;
	}
	if (dp[i][j] != -1) return dp[i][j];
//now main logic
// if both the char matched or a single character is matched with ? then move both pointers
	if (pattern[i - 1] == text[j - 1] or pattern[i - 1] == '?') return dp[i][j] = wildcardMatchShifting(i - 1, j - 1, pattern, text, dp);
	if (pattern[i - 1] == '*') return dp[i][j] = (wildcardMatchShifting(i - 1, j, pattern, text, dp) | wildcardMatchShifting(i, j - 1, pattern, text, dp));
	return dp[i][j] = false;

}

/*tabulation code - */
bool wildcardMatchTabul(string &pattern, string&text) {
	int n = pattern.size(), m = text.size();
	vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
//base cases comparing with memoisation code
//1. base case
	dp[0][0] = true;
//2.base case
	for (int j = 1; j <= m; j++) dp[0][j] = false;
//3. base case
	for (int i = 1; i <= n; i++) {
		bool flag = true;
		for (int k = 1; k <= i; k++) {
			if (pattern[k - 1] != '*') {flag = false; break;};
		}
		dp[i][0] = flag;
	}
//main logic

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (pattern[i - 1] == text[j - 1] or pattern[i - 1] == '?')
				dp[i][j] = dp[i - 1][j - 1];
			else if (pattern[i - 1] == '*')
				dp[i][j] = dp[i - 1][j] | dp[i][j - 1];
			else dp[i][j] = false;
		}
	}
	return dp[n][m];
}

//space optimisation approach
/*tabulation code - */
bool wildcardMatchSpaceOpt(string &pattern, string&text) {
	int n = pattern.size(), m = text.size();
	vector<bool> prev(m + 1), curr(m + 1);
//base cases comparing with memoisation code
//1. base case
	prev[0] = curr[0] = true;
//2.base case
	for (int j = 1; j <= m; j++) prev[j] = false;
//3. base case , is in the first loop
//main logic

	for (int i = 1; i <= n; i++) {

		//everytime columns first element assigned to be false
		bool flag = true;
		for (int k = 1; k <= i; k++) {
			if (pattern[k - 1] != '*') {flag = false; break;};
		}
		curr[0] = flag;

		for (int j = 1; j <= m; j++) {
			if (pattern[i - 1] == text[j - 1] or pattern[i - 1] == '?')
				curr[j] = prev[j - 1];
			else if (pattern[i - 1] == '*')
				curr[j] = prev[j] | curr[j - 1];
			else curr[j] = false;
		}
		prev = curr;
	}
	return prev[m];
}


bool isMatch(string &pattern, string &text) {
	int n = pattern.size(), m = text.size();

	//for memoization
	// vector<vector<int>> dp(n, vector<int>(m, -1));
	// bool res = wildcardMatch(n - 1, m - 1, pattern, text, dp);
	//for shifting of indices
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
	// bool res = wildcardMatchShifting(n, m, pattern, text, dp);

//for tabulation
	// bool res = wildcardMatchTabul(pattern, text);
//for space optimistion
	bool res = wildcardMatchSpaceOpt(pattern, text);
	return res;
}

int main() {
	string pattern, text;
	cin >> pattern >> text;
	cout << isMatch(pattern, text);
	return 0;

}
#include <bits/stdc++.h>

using namespace std;
#define ll long long
void
solve ()
{
  int n;
  cin >> n;

  vector < ll > dp (1000001, INT_MAX);
  dp[0] = 0;
  for (ll i = 1; i <= 9; i++)
    dp[i] = 1;
  ll p = pow (10, 9) + 7;
  for (ll i = 10; i < 1000001; i++)
    {
      ll temp = i;
      while (temp > 0)
	{
	  dp[i] = min (dp[i], 1 + dp[i - (temp % 10)]);
	  temp = temp / 10;
	}
    }
  cout << dp[n];
}

int
main ()
{
    solve();

  return 0;
}

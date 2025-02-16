#include <bits/stdc++.h>

#define br "\n"
#define ll long long

using namespace std;

class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> price(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> price[i];
        }
        vector<ll> dp(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= i; j++)
            {
                dp[i] = max(dp[i], price[j] + dp[i - j]);
            }
        }
        cout << dp[n] << br;
    }
};
signed main()
{
    // _Created : 16 February 2025 ||  11:00:27
    // _File    : RodCutting.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}
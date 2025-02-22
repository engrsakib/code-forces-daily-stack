#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> result;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
                result.push_back(a[i]);
        }

        for (ll i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }

        cout << br;
    }
};

signed main()
{
    // _Created : 22 February 2025 ||  20:17:57
    // _File    : Reverse_and_Even.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

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

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
        vector<ll> marks(n);
        ll highest = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> marks[i];
            highest = max(highest, marks[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cout << (highest - marks[i]) << " ";
        }
        cout << br;
    }
};

signed main()
{
    // _Created : 22 February 2025 ||  20:28:27
    // _File    : Highest_Marks.cpp
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

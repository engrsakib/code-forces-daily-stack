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
        ll tiger_wins = 0, pathan_wins = 0;
        
        for (ll i = 0; i < n; i++) {
            ll x1, x2;
            cin >> x1 >> x2;
            
            if (x1 > x2) tiger_wins++;
            else if (x2 > x1) pathan_wins++;
        }
        
        if (tiger_wins > pathan_wins) {
            cout << "Tiger" << br;
        } else if (pathan_wins > tiger_wins) {
            cout << "Pathan" << br;
        } else {
            cout << "Draw" << br;
        }
    }
};

signed main()
{
     // _Created : 12 February 2025 ||  20:49:29
    // _File    : Who_Wins.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while (t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}

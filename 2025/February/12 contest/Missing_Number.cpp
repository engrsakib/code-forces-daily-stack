#include <bits/stdc++.h>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << s - (a + b + c) << br;
    }
};

signed main()
{
     // _Created : 12 February 2025 ||  20:47:50
    // _File    : Missing_Number.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}

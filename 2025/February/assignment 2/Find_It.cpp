#include <bits/stdc++.h>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll n, x;
        cin >> n;  
        vector<ll> a(n);  
        for (ll i = 0; i < n; i++) {
            cin >> a[i];  
        }
        cin >> x; 
      
        ll count = 0;
        for (ll i = 0; i < n; i++) {
            if (a[i] == x) {
                count++;
            }
        }

        cout << count << br;
    }
};

signed main()
{
    
    // _Created : 22 February 2025 ||  20:49:03
    // _File    : Find_It.cpp
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

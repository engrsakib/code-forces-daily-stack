#include <iostream>
#include <vector>
#include <algorithm>

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
        vector<ll> ages(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> ages[i];
        }
        
        sort(ages.begin(), ages.end());
        
        if (n % 2 == 1) 
        {
            cout << ages[(n + 1) / 2 - 1] << br;
        }
        else 
        {
            cout << ages[n / 2 - 1] << " " << ages[n / 2] << br;
        }
    }
};

signed main()
{
    
    // _Created : 22 February 2025 ||  21:12:06
    // _File    : Middle_Man.cpp
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

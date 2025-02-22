#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void odd_even()
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll even_count = 0, odd_count = 0;
        
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        
        cout << even_count << " " << odd_count << br;
    }
};

signed main()
{
    // _Created : 22 February 2025 ||  20:29:57
    // _File    : Even_and_Odd.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.odd_even();
    }
    return 0;
}

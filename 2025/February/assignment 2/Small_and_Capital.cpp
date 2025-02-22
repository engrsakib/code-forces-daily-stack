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
        string s;
        cin >> s;
        ll capital_count = 0, small_count = 0;
        for (char c : s)
        {
            if (isupper(c))
            {
                capital_count++;
            }
            else if (islower(c))
            {
                small_count++;
            }
        }
        cout << capital_count << " " << small_count << br;
    }
};

signed main()
{
    // _Created : 22 February 2025 ||  20:22:22
    // _File    : Small_and_Capital.cpp
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
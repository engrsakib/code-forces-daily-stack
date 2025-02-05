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
        ll odd = 0, even = 0;
        for (ll i = 0; i < 2 * n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
            yes;
        else
            no;
    }
};
signed main()
{
    // _Created : 05 February 2025 ||  11:56:45
    // _File    : A_Odd_Set.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}
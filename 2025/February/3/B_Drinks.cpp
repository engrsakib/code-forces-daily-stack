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
        double sum = 0;
        for (ll i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            sum += x;
        }
        cout << fixed << setprecision(12) << sum / n << br;
    }
};
signed main()
{
    // _Created : 03 February 2025 ||  18:17:01
    // _File    : B_Drinks.cpp
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
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
        ll n, x;
        cin >> n >> x;
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0)
        {
            no;
            return;
        }
        if (odd % 2 == 0)
            odd--;
        if (odd + even >= x && x % 2 == 1)
            yes;
        else
            no;
    }
};
signed main()
{
    // _Created : 02 February 2025 ||  20:15:07
    // _File    : A_Odd_Selection.cpp
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
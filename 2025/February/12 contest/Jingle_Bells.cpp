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
        
        if (n % 2 != 0) {
            ll line = (n - 1) / 2 + 6;
            ll space = line - 1;
            ll star = 1;

            for (ll i = 1; i <= line; i++) {
                for (ll j = 1; j <= space; j++) {
                    cout << " ";
                }
                for (ll j = 1; j <= star; j++) {
                    cout << "*";
                }
                space--;
                star += 2;
                cout << br;
            }

            for (ll i = 1; i <= 5; i++) {
                for (ll j = 1; j <= 5; j++) {
                    cout << " ";
                }
                for (ll j = 1; j <= n; j++) {
                    cout << "*";
                }
                cout << br;
            }
        }
    }
};
signed main()
{
    // _Created : 12 February 2025 ||  20:52:41
    // _File    : Jingle_Bells.cpp
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

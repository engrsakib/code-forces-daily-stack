#include <iostream>
#include <vector>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> matrix(n, vector<ll>(m));

       
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        for (ll j = 0; j < m; ++j)
        {
            cout << matrix[n - 1][j] << " ";
        }
        cout << br;

       
        for (ll i = 0; i < n; ++i)
        {
            cout << matrix[i][m - 1] << " ";
        }
        cout << br;
    }
};

signed main()
{
    // _Created : 22 February 2025 ||  21:15:01
    // _File    : Matrix_Again.cpp
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

#include <iostream>

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

      
        for (int i = 1; i <= n; i++)
        {
           
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }

            
            for (int k = i; k >= 1; k--)
            {
                cout << k;
            }

           
            cout << br;
        }
    }
};

signed main()
{
    // _Created : 12 February 2025 ||  20:41:49
    // _File    : Pattern_2.cpp
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

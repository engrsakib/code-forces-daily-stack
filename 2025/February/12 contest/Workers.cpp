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
        ll M1, M2, D;
        cin >> M1 >> M2 >> D;

       
        ll days = (M1 * D) / M2;

      
        cout << days << br;
    }
};

signed main()
{
    // _Created : 12 February 2025 ||  20:39:05
    // _File    : Workers.cpp
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

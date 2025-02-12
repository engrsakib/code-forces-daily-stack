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

        if (n <= 0)
        {
            for (int i = n; i <= 1; i++)
            {
                cout << i << " ";
               
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }
    }
};

signed main()
{
    // _Created : 12 February 2025 ||  20:23:09
    // _File    : Can_You_Do_It.cpp
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

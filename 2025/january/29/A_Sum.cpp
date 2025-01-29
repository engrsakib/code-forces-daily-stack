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
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a + b == c || a + c == b || b + c == a)
        {
            yes;
        }
        else
        {
            no;
        }
    }
};
signed main()
{
    // _Created : 29 January 2025 ||  13:43:42
    // _File    : A_Sum.cpp
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
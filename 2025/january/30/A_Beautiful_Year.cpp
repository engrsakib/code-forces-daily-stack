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
        while (true)
        {
            n++;
            string s = to_string(n);
            set<char> st;
            for (char c : s)
            {
                st.insert(c);
            }
            if (st.size() == 4)
            {
                cout << n << br;
                return;
            }
        }
    }
};
signed main()
{
    // _Created : 30 January 2025 ||  13:53:22
    // _File    : A_Beautiful_Year.cpp
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
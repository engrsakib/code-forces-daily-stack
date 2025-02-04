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
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '+')
            {
                v.push_back(s[i] - '0');
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i != v.size() - 1)
            {
                cout << "+";
            }
        }
        cout << br;
    }
};
signed main()
{
    // _Created : 04 February 2025 ||  21:40:36
    // _File    : A_Helpful_Maths.cpp
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
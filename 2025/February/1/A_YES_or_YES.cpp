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
        string s, lower;
        cin >> s;

       for (char &c : s) {
        c = tolower(c);  
        lower += c;
    }

        if (lower.find("yes") != string::npos)
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
    // _Created : 01 February 2025 ||  12:57:29
    // _File    : A_YES_or_YES.cpp
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
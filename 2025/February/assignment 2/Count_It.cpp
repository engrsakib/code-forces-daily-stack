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
        getline(cin, s);
        ll small = 0, capital = 0, spaces = 0;
        for (char c : s)
        {
            if (islower(c)) small++;
            else if (isupper(c)) capital++;
            else if (c == ' ') spaces++;
        }
        cout << "Capital - " << capital << br;
        cout << "Small - " << small << br;
        cout << "Spaces - " << spaces << br;
    }
};

signed main()
{

     // _Created : 22 February 2025 ||  21:09:04
    // _File    : Count_It.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}

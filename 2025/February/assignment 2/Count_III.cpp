#include <bits/stdc++.h>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    void solve()
    {
        string s;
        cin >> s; 
        
        vector<ll> freq(26, 0);  

       
        for (char c : s) {
            freq[c - 'a']++;
        }

        
        for (ll i = 0; i < 26; i++) {
            cout << char('a' + i) << " - " << freq[i] << br;
        }
    }
};

signed main()
{
    
    // _Created : 22 February 2025 ||  20:51:56
    // _File    : Count_III.cpp
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

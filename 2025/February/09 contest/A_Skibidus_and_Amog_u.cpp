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
        string W;
        cin >> W;
        
        // Replace singular "us" with plural "i"
        W = W.substr(0, W.size() - 2) + "i";

        cout << W << br;
    }
};

signed main()
{
    // _Created : 09 February 2025 ||  20:35:55
    // _File    : A_Skibidus_and_Amog_u.cpp
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

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
        
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 and i % 7 == 0){
                cout << i << " \n";
            }
        }
    }
};
signed main()
{
    // _Created : 12 February 2025 ||  20:12:36
    // _File    : Divisible_2.cpp
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
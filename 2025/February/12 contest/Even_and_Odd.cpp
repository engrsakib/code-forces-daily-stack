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
        ll even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a % 2 == 0){
                even += a;
            }else{
                odd += a;
            }
        }
        cout << even << " " << odd << br;
    }
};
signed main()
{
    // _Created : 12 February 2025 ||  20:35:07
    // _File    : Even_and_Odd.cpp
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
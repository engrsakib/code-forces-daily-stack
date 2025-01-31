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
        ll a = 0, b = 0;
        cin >> s;
        for(char car : s){
            if(car == 'A') a++;
            else b++;
        }
        if(a > b) cout << "A\n";
        else cout << "B\n";
        
    }
};
signed main()
{
    // _Created : 31 January 2025 ||  11:41:12
    // _File    : A_Vlad_and_the_Best_of_Five.cpp
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
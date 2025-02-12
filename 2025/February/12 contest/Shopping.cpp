#include <iostream>

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
        ll N;
        cin >> N;

        
        if (N > 1000)
        {
            cout << "I will buy Punjabi" << br;
            N -= 1000; 

            
            if (N >= 500)
            {
                cout << "I will buy new shoes" << br;
                cout << "Alisa will buy new shoes" << br;
            }
            
        }
        else
        {
            cout << "Bad luck!" << br;
        }
    }
};

signed main()
{
    // _Created : 12 February 2025 ||  20:15:58
    // _File    : Shopping.cpp
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

#include <bits/stdc++.h>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll N, K;
        cin >> N >> K; 
        
        
        for (ll i = 0; i < K; i++) {
           
            for (ll j = 1; j <= N; j++) {
                cout << j << " ";
            }
            cout << br; 
        }
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    while (t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}

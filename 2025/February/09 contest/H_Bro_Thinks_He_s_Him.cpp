#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

class Solution {
public:
    void solve() {
        string s;
        cin >> s;
        
        int n = s.length();
        vector<int> ans(n + 1);
        vector<int> power2(n + 1);
        
        power2[0] = 1;
        for (int i = 1; i <= n; ++i) {
            power2[i] = (power2[i - 1] * 2) % MOD;
        }

        // initial calculation of f(s)
        int total = 0;
        int currentCount = 1;
        
        // Find how many segments exist in the given string s
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                total = (total + power2[currentCount] - 1) % MOD;
                currentCount = 1;
            } else {
                currentCount++;
            }
        }

        total = (total + power2[currentCount] - 1) % MOD;
        cout << total << endl;
        
        // Perform queries
        int q;
        cin >> q;

        while (q--) {
            int idx;
            cin >> idx;
            idx--; // Convert to 0-based indexing
            s[idx] = (s[idx] == '1') ? '0' : '1';
            // Recalculate f after flip and print
            int total = 0;
            int currentCount = 1;
            
            // Recalculate after flipping
            for (int i = 1; i < n; ++i) {
                if (s[i] != s[i - 1]) {
                    total = (total + power2[currentCount] - 1) % MOD;
                    currentCount = 1;
                } else {
                    currentCount++;
                }
            }
            total = (total + power2[currentCount] - 1) % MOD;
            cout << total << endl;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        Solution obj;
        obj.solve();
    }

    return 0;
}

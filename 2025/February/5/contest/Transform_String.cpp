#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        string A, B;
        cin >> A >> B;

        if (B.size() > A.size()) {
            cout << -1 << "\n";
            return;
        }

        int m = B.size();
        long long cost = 0;
        int b_ptr = 0;

        for (int i = 0; i < A.size(); i++) {
            // If characters match, move the B pointer forward
            if (b_ptr < m && A[i] == B[b_ptr]) {
                b_ptr++;
            } else {
                // Cost is based on the current position (1-based index)
                cost += (i + 1);
            }
        }

        // If B was not completely matched, return -1
        if (b_ptr < m) {
            cout << -1 << "\n";
        } else {
            cout << cost << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}

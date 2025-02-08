#include <bits/stdc++.h>
using namespace std;

void solve() {
    string A, B;
    cin >> A >> B;

    int n = A.size(), m = B.size();
    int j = 0, cost = 0;

    for (int i = 0; i < n && j < m; i++) {
        if (A[i] == B[j]) {
            j++;  // Move to the next character in B
        } else {
            cost += (i + 1);  // Add the cost of removing A[i]
        }
    }

    if (j < m) {  // If B is not completely found in A
        cout << -1 << "\n";
    } else {
        cout << cost << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}

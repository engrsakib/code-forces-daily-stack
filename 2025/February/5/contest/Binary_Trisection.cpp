#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve() {
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<int> prefixMod3(N + 1, 0);  

    // Compute prefix sum modulo 3
    for (int i = 1; i <= N; i++) {
        prefixMod3[i] = (prefixMod3[i - 1] * 2 + (S[i - 1] - '0')) % 3;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        L--; R--;  

        int sum_mod3;
        if (L == 0) {
            sum_mod3 = prefixMod3[R + 1] % 3;
        } else {
            sum_mod3 = (prefixMod3[R + 1] - (prefixMod3[L] * (1LL << (R - L + 1)) % 3) + 3) % 3;
        }

        cout << (sum_mod3 == 0 ? "YES" : "NO") << br;
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

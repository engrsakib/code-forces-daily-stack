#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

int find_streak(vector<ll> &A) {
    int max_streak = 1, curr_streak = 1;
    for (size_t i = 1; i < A.size(); i++) {
        if (A[i] >= A[i - 1]) {
            curr_streak++;
        } else {
            curr_streak = 1;
        }
        max_streak = max(max_streak, curr_streak);
    }
    return max_streak;
}

void solve() {
    int N;
    ll X;
    cin >> N >> X;

    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int best_streak = find_streak(A);

    for (int i = 0; i < N; i++) {
        ll original = A[i];
        A[i] *= X;  
        best_streak = max(best_streak, find_streak(A));
        A[i] = original;  
    }

    cout << best_streak << br;
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

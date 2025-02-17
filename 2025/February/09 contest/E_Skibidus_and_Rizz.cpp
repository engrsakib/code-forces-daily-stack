#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    if (k > max(n, m)) {
        cout << "-1\n";
        return;
    }

    string s;
    
    // প্রথমে k সংখ্যক 0 বা 1 বসাই, যেটা বেশি সেটাকে আগে রাখি
    if (n > m) {
        for (int i = 0; i < k; i++) {
            s += "0";
            n--;
        }
    } else {
        for (int i = 0; i < k; i++) {
            s += "1";
            m--;
        }
    }

    // Alternating প্যাটার্ন বজায় রেখে n এবং m ব্যালেন্সডভাবে বসাই
    while (n > 0 || m > 0) {
        if (s.back() == '0' && m > 0) {
            s += "1";
            m--;
        } else if (s.back() == '1' && n > 0) {
            s += "0";
            n--;
        } else if (n > 0) {
            s += "0";
            n--;
        } else if (m > 0) {
            s += "1";
            m--;
        }
    }

    // ব্যালেন্স চেক করি
    int max_balance = 0, zero_count = 0, one_count = 0;
    for (char c : s) {
        if (c == '0') zero_count++;
        else one_count++;

        max_balance = max(max_balance, abs(zero_count - one_count));
    }

    if (max_balance == k) {
        cout << s << '\n';
    } else {
        cout << "-1\n"; // যদি ব্যালেন্স k না হয় তাহলে এটি সম্ভব নয়
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

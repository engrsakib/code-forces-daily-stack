#include <bits/stdc++.h>

#define br "\n"
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    string first_half = string(X / 2, '1') + string(Y / 2, '2');
    string smallest_palindrome = first_half + string(first_half.rbegin(), first_half.rend());

    cout << smallest_palindrome << br;
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

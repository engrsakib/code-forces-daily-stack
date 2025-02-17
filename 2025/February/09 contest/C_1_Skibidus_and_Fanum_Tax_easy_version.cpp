#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        long long b;
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> b;  // Single element of b since m = 1

        // Check if the array can be sorted
        long long minVal = LLONG_MIN, maxVal = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            // Calculate possible values
            long long keepValue = a[i];
            long long transformedValue = b - a[i];

            // Find valid range for sorting
            long long low = min(keepValue, transformedValue);
            long long high = max(keepValue, transformedValue);

            if (high < minVal || low > maxVal) {
                cout << "NO\n";
                return;
            }
            minVal = max(minVal, low);
            maxVal = min(maxVal, high);
        }
        cout << "YES\n";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        Solution().solve();
    }
    return 0;
}

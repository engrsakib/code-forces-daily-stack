#include <bits/stdc++.h>

#define br "\n"
#define ll long long
using namespace std;

class Solution
{
public:
    int knapSack(int W, vector<int> &wt, vector<int> &val, int n)
    {

        if (n == 0 || W == 0)
            return 0;

        if (wt[n - 1] > W)
            return knapSack(W, wt, val, n - 1);

        return max(knapSack(W, wt, val, n - 1),
                   val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1));
    }
    void solve()
    {
        vector<int> profit;
        vector<int> weight;
        int N, W;
        cin >> N >> W;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            profit.push_back(x);
        }
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            weight.push_back(x);
        }


        cout << knapSack(W, weight, profit, profit.size()) << endl;
    }
};
signed main()
{
    // _Created : 16 February 2025 ||  11:10:00
    // _File    : 1_Knapsack.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
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
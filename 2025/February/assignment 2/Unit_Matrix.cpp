#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));

       
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> matrix[i][j];
            }
        }

       
        bool isUnitMatrix = true;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                {
                    if (matrix[i][j] != 1) 
                    {
                        isUnitMatrix = false;
                        break;
                    }
                }
                else
                {
                    if (matrix[i][j] != 0) 
                    {
                        isUnitMatrix = false;
                        break;
                    }
                }
            }
            if (!isUnitMatrix) break;
        }

        if (isUnitMatrix)
            yes;
        else
            no;
    }
};

int main()  
{
    // _Created : 22 February 2025 ||  20:59:14
    // _File    : Unit_Matrix.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

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

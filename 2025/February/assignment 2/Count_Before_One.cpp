#include <bits/stdc++.h>
#define ll long long
using namespace std;

int count_before_one(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            return i;
        }
    }
    return n;
}

int main() {

     // _Created : 22 February 2025 ||  20:54:14
    // _File    : Count_Before_One.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = count_before_one(arr, n);
    cout << result << "\n";
    return 0;
}

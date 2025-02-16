#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main() {

     // _Created : 16 February 2025 ||  09:01:08
    // _File    : linear_search.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم

    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int t ;
    cin >> t;
    int res = search(arr, t);
    if (res == -1)
       cout << "Not Present";
    else
       cout << t << " Present at Index " << res;
    return 0;
}

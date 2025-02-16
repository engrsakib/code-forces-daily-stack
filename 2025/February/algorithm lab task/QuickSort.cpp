#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec, int low, int high) {

    int pivot = vec[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {

        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return (i + 1);
}

void quickSort(vector<int> &vec, int low, int high) {

    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {

    // _Created : 16 February 2025 ||  10:41:27
    // _File    : QuickSort.cpp
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    
    vector<int> vec ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    quickSort(vec, 0, n - 1);
    for (auto i : vec) {
        cout << i << " ";
    }
    return 0;
}

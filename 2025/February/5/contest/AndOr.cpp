#include <iostream>
#include <vector>
using namespace std;

// Function to compute the beauty of the array
int computeBeauty(const vector<int>& A) {
    int beauty = A[0];
    for (int i = 1; i < A.size(); ++i) {
        if (i % 2 == 1) {
            beauty &= A[i]; // AND operation
        } else {
            beauty |= A[i]; // OR operation
        }
    }
    return beauty;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Precompute the initial beauty
        int beauty = computeBeauty(A);

        int Q;
        cin >> Q;
        while (Q--) {
            int p, X;
            cin >> p >> X;
            p--; // Convert to 0-based index

            // Update the beauty based on the change
            if (p == 0) {
                beauty = X;
                for (int i = 1; i < N; ++i) {
                    if (i % 2 == 1) {
                        beauty &= A[i];
                    } else {
                        beauty |= A[i];
                    }
                }
            } else {
                if (p % 2 == 1) {
                    beauty &= X; // Update AND operation
                } else {
                    beauty |= X; // Update OR operation
                }
            }

            // Update the array
            A[p] = X;

            // Output the beauty
            cout << beauty << "\n";
        }
    }

    return 0;
}
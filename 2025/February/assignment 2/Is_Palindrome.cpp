#include <iostream>
#include <string>
using namespace std;


int is_palindrome(string S) {
    int start = 0, end = S.length() - 1;
    
    
    while (start < end) {
        if (S[start] != S[end]) {
            return 0;  
        }
        start++;
        end--;
    }
    
    return 1;  
}

int main() {
    string S;
    cin >> S;  

    int result = is_palindrome(S);  

    if (result == 1) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

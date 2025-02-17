#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        string s;
        cin >> s;

        // এক ধরনের ক্যারেক্টার মুছে ফেলার জন্য স্ট্যাক ব্যবহার
        stack<char> st;
        
        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop(); // যদি adjacent matching characters থাকে, তা মুছে ফেলুন
            } else {
                st.push(c); // না হলে, স্ট্যাকের মধ্যে push করুন
            }
        }

        // স্ট্যাকের সাইজ যা রয়ে যাবে সেটিই হবে স্ট্রিংয়ের নতুন দৈর্ঘ্য
        cout << st.size() << endl;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        Solution obj;
        obj.solve(); // প্রতিটি টেস্ট কেসের জন্য solve() কল করা হচ্ছে
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int find(vector<int>& a) {
        int maxc = -1;
        for (int i = 0; i <= 256; i++)
            maxc = max(maxc, a[i]);
            return maxc;   
    }
    int characterReplacement(string s, int k) {
        int low = 0, high = 0, res = INT_MIN;
        int n = s.size();
        vector<int> f(256, 0);
        for (int high = 0; high < n; high++) {
            f[s[high]]++;
            int len = high - low + 1;
            int maxcount = find(f);
            int diff = len - maxcount;
            while (diff > k) {
                f[s[low]]--;
                low++;
                maxcount = find(f);
                len = high - low + 1;
                diff = len - maxcount;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};


int main() {
    string s = "AABABBA";
    int k = 1;

    Solution sol;
    int res = sol.characterReplacement(s, k);

    cout << "Result: " << res << endl;
    return 0;
}
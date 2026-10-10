class Solution {
public:
    int longestPalindrome(string s) {
         unordered_map<char, int> mpp;

        for (char c : s) {
            mpp[c]++;
        }

        int cnt = 0;
        bool hasOdd = false;

        for (auto it : mpp) {
            cnt += (it.second / 2) * 2;

            if (it.second % 2 != 0) {
                hasOdd = true;
            }
        }

        if (hasOdd==true) {
            cnt++;
        }

        return cnt;
    }
};
class Solution {
public:
    string removeDuplicateLetters(string s) {

        map<char, int> mp;

        // Count frequency
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        string ans = "";

        // To check whether character is already in ans
        map<char, bool> used;

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            // Current character is now being processed
            mp[ch]--;

            // If already present in answer, skip it
            if (used[ch]) {
                continue;
            }

            // Remove characters from answer
            // if current character is smaller
            // and the previous character can appear later
            while (!ans.empty() &&
                   ans.back() > ch &&
                   mp[ans.back()] > 0) {

                used[ans.back()] = false;
                ans.pop_back();
            }

            ans += ch;
            used[ch] = true;
        }

        return ans;
    }
};
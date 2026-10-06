class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, 0);
        
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        stack<char> st;
        vector<bool> used(26, false);

        for (int i = 0; i < s.size(); i++) {
            if (used[s[i] - 'a']) {
                continue;
            }

            // Remove larger characters if they appear again later
            while (!st.empty() &&
                   st.top() > s[i] &&
                   last[st.top() - 'a'] > i) {
                
                used[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            used[s[i] - 'a'] = true;
        }

        // Convert stack to string
        string ans;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
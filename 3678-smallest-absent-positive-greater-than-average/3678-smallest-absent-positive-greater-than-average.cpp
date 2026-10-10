class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum = 0;
        unordered_set<int> st;

        for (int x : nums) {
            sum += x;
            st.insert(x);
        }

        double avg = (double)sum / nums.size();
        int ans = max(1, (int)floor(avg) + 1);

        while (st.count(ans)) {
            ans++;
        }

        return ans;
    }
};
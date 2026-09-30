class Solution {
public:
    long long maxProfit(int n, vector<vector<int>>& edges, vector<int>& score) {
        
        // mask[i] = nodes that must come before i
        vector<int> mask(n, 0);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];

            mask[v] |= (1 << u);
        }

        int total = 1 << n;

        // dp[subset] = maximum profit after processing
        // all nodes present in subset
        vector<long long> dp(total, -1);

        dp[0] = 0;

        for (int state = 0; state < total; state++) {
            
            if (dp[state] == -1)
                continue;

            // Current position is number of nodes already processed + 1
            int pos = __builtin_popcount(state) + 1;

            for (int node = 0; node < n; node++) {
                
                // Already processed
                if (state & (1 << node))
                    continue;

                // Check whether all prerequisites of node
                // are already present in state
                if ((mask[node] & state) == mask[node]) {
                    
                    int newState = state | (1 << node);

                    dp[newState] = max(
                        dp[newState],
                        dp[state] + 1LL * score[node] * pos
                    );
                }
            }
        }

        return dp[total - 1];
    }
};
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;

        for (int i = 0; i < row; i++) {
            int l = 0;
            int r = col - 1;
            int firstNegative = col;

            while (l <= r) {
                int m = l + (r - l) / 2;

                if (grid[i][m] < 0) {
                    firstNegative = m;
                    r = m - 1;
                }
                else {
                    l = m + 1;
                }
            }

            count += col - firstNegative;
        }

        return count;
    }
};
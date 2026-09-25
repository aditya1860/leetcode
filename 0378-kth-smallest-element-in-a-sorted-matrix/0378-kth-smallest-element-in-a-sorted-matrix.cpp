class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> arr;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr.push_back(matrix[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        return arr[k - 1];
    }
};
class Solution {
public:
    int pivotInteger(int n) {

        int totalsum = 0;

        for (int i = 1; i <= n; i++) {
            totalsum += i;
        }

        for (int i = 1; i <= n; i++) {

            int left = 0;
            int right = 0;

            for (int j = 1; j <= i; j++) {
                left += j;
            }

            for (int j = i; j <= n; j++) {
                right += j;
            }

            if (left == right) {
                return i;
            }
        }

        return -1;
    }
};
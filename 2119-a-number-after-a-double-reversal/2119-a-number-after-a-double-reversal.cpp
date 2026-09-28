class Solution {
public:

    int revnum(int n) {
        int ans = 0;
        while (n > 0) {
            int digit = n % 10;
            ans = ans * 10 + digit;
            n = n / 10;
        }
        return ans;
    }
    int sumdigit(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += 1;
            n = n / 10;
        }

        return sum;
    }

    bool isSameAfterReversals(int num) {
        int rever = revnum(num);
        if (sumdigit(num) == sumdigit(rever))
            return true;
        return false;
    }
};
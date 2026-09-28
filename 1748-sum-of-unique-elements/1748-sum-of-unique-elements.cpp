class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        vector<int> arr;

        for (int i = 0; i < nums.size(); i++) {

            int count = 0;

            for (int j = 0; j < nums.size(); j++) {

                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count == 1) {
                arr.push_back(nums[i]);
            }
        }

        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        return sum;
    }
};
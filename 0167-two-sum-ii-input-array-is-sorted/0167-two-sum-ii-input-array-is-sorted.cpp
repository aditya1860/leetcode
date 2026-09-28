class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;

        int compliment = 0;
        int i = 0;

        while (i < numbers.size()) {
            compliment = target - numbers[i];

            if (mp.find(compliment) != mp.end()) {
                return {mp[compliment], i+1};
            }

            mp[numbers[i]] = i+1;
            i++;
        }

        return {};
    }
};
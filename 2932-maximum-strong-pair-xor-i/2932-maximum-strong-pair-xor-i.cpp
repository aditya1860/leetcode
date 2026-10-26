class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int, int>>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(nums[i]-nums[j])<=min(nums[i], nums[j])){
                    arr.push_back({nums[i],nums[j]});
                }
            }
        }
        int xori=0;
        for(int i=0;i<arr.size();i++){
            int a=arr[i].first;
            int b=arr[i].second;
            xori=max(a^b, xori);
        }
        return xori;
    }
};
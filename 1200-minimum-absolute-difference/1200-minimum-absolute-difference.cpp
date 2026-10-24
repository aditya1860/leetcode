class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        vector<int> arr1;
        vector<vector<int>>ans;
        for(int i = 0 ; i<arr.size()-1; i++){
            int diff=arr[i+1]-arr[i];
            arr1.push_back(diff);
        }
        mini=*min_element(arr1.begin(),arr1.end());
        for(int i = 0 ; i<arr.size()-1; i++){
            if(arr[i+1]-arr[i]==mini){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
    return ans;
    }
};

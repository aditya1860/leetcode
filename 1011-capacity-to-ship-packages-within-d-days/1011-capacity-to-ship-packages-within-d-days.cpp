class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        while(low<high){
            int mid=low+(high-low)/2;
            int weight=0;
            int minidays=1;
            for(int i=0;i<n;i++){
                if(weight+weights[i]>mid){
                    minidays++;
                    weight=0;
                }
                weight+=weights[i];
            }
            if(minidays>days){
                low=mid+1;
            }
            else high=mid;
        }
        return low;
    }
};
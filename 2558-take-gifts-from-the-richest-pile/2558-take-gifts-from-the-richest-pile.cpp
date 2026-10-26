class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        int maxi=0;
        for(int i=0;i<k;i++){
            sort(gifts.begin(), gifts.end());
            gifts[n-1]=pow(gifts[n-1],0.5);
        }
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=gifts[i];
        }
        return sum;
    }
};
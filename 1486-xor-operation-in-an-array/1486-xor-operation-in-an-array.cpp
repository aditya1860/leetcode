class Solution {
public:
    int xorOperation(int n, int start) {
        int cnt=0;
        vector<int>arr;
        int i=0;
        int xori=0;
        while(cnt<=n){
            arr.push_back(start+2*i);
            cnt++;
            i++;
        }
        for(int i=0;i<n;i++){
            xori^=arr[i];
        }
        return xori;
    }
};
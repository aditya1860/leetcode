class Solution 
{
public:
    int distanceBetweenBusStops(vector<int>& dist, int s, int e) 
    {
        int n = dist.size();
        int sum1 = 0, sum2 = 0;
        int total = 0;

        if (s < e)
        {
            for (int i = s; i < e; i++)
                sum1 += dist[i];
        }
        else if (s > e) 
        { 
            for (int i = e; i < s; i++)
                sum1 += dist[i];
        }
       
        for (int i : dist)
            total += i; 
        sum2 = total - sum1;
        return min(sum1, sum2);
    }
};
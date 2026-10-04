class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i,len,sum,sw,ew;
        double maxavg, currentavg;
        len = nums.size();
        sum = 0;
        for(i=0;i<k;i++)
        {
            sum = sum + nums[i];
        }
        maxavg = (double) sum/k;
        currentavg = maxavg;
        for(i=1;i<(len-k+1);i++)
        {
            sw = i-1;
            ew = (i+k)-1;
            sum = (sum-nums[sw]) + nums[ew];
            currentavg = (double) sum/k;

            if(currentavg > maxavg)
            maxavg = currentavg;
        }
        return maxavg;
    }
};
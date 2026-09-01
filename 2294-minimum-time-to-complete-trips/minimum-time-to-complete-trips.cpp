class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int i,len,min,max,mid,sum,ans,j;
        len = time.size();
        min = INT_MAX;
        sum = 0;
        for(i=0;i<len;i++)
        {
            if(min>time[i])
            min = time[i];
        }
        max = min * totalTrips;
        min = 1;
        ans = max;
        while(min<=max)
        {
            mid = (min+max)/2;
            sum = 0;
            for(j=0;j<len;j++)
            {
                sum = sum + (mid/time[j]);
            }
            if(sum>=totalTrips)
            {ans = mid;
            max = mid-1;}
            else
            min = mid+1;
        }
        return ans;
    }
};
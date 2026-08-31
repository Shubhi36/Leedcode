class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long int i,len,j,sum,low,high,mid,min,ans;
        len = ranks.size();
        min = INT_MAX;
        for(i=0;i<len;i++)
        {
            if(min>ranks[i])
            min = ranks[i];
        }
        low = 1;
        ans = high;
        high = min * cars * cars;
        while(low<=high)
        {
            mid = (low+high)/2;
            sum = 0;
            for(j=0;j<len;j++)
            {
                sum = sum + sqrt(mid/ranks[j]);
            }
            if(sum>=cars)
            {ans = mid;
            high = mid-1;}
            else
            low = mid+1;
        }
        return ans;
    }
};
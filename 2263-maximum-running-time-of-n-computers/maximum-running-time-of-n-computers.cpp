class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long int i,len,high,sum,low,ans,j,mid;
        len = batteries.size();
        sum = 0;
        for(i=0;i<len;i++)
        {
            sum = sum + batteries[i];
        }
        high = sum/n;
        low = 1;
        while(low<=high)
        {
            mid = (low+high)/2;
            sum = 0;
            for(j=0;j<len;j++)
            {
                sum += min((long long)batteries[j], mid);
            }
            if(sum >= mid*n)
            {ans = mid;
            low = mid + 1;}
            else
            high = mid - 1;
        }
        return ans;
    }
};
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int i,len,min,max,mid,ans,sum,count,j;
        len = nums.size();
        if(k>len)
        return -1;
        max = nums[0];
        sum = nums[0];
        for(i=1;i<len;i++)
        {
            if(max<nums[i])
            max = nums[i];
            sum = sum + nums[i];
        }
        min = max;
        max = sum;
        ans = -1;
        while(min<=max)
        {
            sum = 0;
            count = 0;
            mid = (min+max)/2;
            for(j=0;j<len;j++)
            {
                if(sum+nums[j]<=mid)
                sum = sum + nums[j];
                else
                {sum = nums[j];
                count++;}
            }
            if(count<=k-1)
            {ans = mid;
            max = mid-1;}
            else
            min = mid+1;
        }
        return ans;
    }
};
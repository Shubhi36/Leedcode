class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long int i,len,count,low1,high1,mid1,low2,high2,mid2,ans1,ans2,ans;
        len = nums.size();
        sort(nums.begin(),nums.end());
        count = 0;
        ans = 0;
        for(i=0;i<len;i++)
        {
            ans1 = -1;
            ans2 = -1;
            low1 = i+1;
            high1 = len-1;
            while(low1<=high1)
            {
                mid1 = (low1 + high1)/2;
                if(lower <= (long long)(nums[i] + nums[mid1]))
                {ans1 = mid1;
                high1 = mid1 - 1;}
                else
                low1 = mid1 + 1;
            }
            low2 = i+1;
            high2 = len-1;
            while(low2<=high2)
            {
                mid2 = (low2 + high2)/2;
                if((long long)(nums[i] + nums[mid2]) <= upper)
                {ans2 = mid2;
                low2 = mid2 + 1;}
                else
                high2 = mid2 - 1;
            }
            if(ans1 != -1 && ans2 != -1 && ans1 <= ans2)
            ans = ((ans2 - ans1) + 1)+ans;
        }
        return ans;
    }
};
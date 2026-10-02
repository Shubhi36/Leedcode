class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,len,j,sum,ans;
        len = nums.size();
        i = 0;
        j = 0;
        ans = INT_MAX;
        sum = nums[j];
        while(j < len)
        {
            if(sum < target)
            {
                j++;
                if(j < len)
                sum += nums[j];
            }
            else
            {
                if(ans > (j-i)+1)
                ans = (j-i)+1;

                sum -= nums[i];
                i++;
            }
        }
        if(ans != INT_MAX)
        return ans;
        else
        return 0;
    }
};
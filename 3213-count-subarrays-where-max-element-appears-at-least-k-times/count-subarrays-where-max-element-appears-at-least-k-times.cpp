class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int len,i,j,msw,count,max;
        len = nums.size();
        i = 0;
        j = 0;
        max = *max_element(begin(nums), end(nums));
        count = 0;
        msw = 0;
        while(j<len)
        {
            if(nums[j] == max)
            count++;
            if(count == k)
            {
                msw = msw + len - j;
                while(count == k)
                {
                    if(nums[i] == max)
                    count--;
                    else
                    msw = msw + len - j;

                    i++;
                }
            }
            j++;
        }
        return msw;
    }
};
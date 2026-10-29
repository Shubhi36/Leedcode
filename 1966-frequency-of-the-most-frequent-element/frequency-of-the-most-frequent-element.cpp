class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int len,i,j,currentlen,maxlen;
        long int currentsum,modifiedsum;
        len = nums.size();
        i = 0;
        j = 0;
        currentsum = 0;
        maxlen = 0;
        sort(nums.begin(),nums.end());
        while(j<len)
        {
            currentsum = (long) currentsum + nums[j];
            modifiedsum = (long) nums[j] * ((j - i) + 1);
            if (i < len && abs(modifiedsum-currentsum) > k)
            {
                currentsum = (long) currentsum - nums[i];
                i++;
                modifiedsum = (long) nums[j] * ((j - i) + 1);
            }
            currentlen = (j-i) + 1;
            if(maxlen<currentlen)
            maxlen = currentlen;
            j++;
        }
        return maxlen;
    }
};
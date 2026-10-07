class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i,len,j,c0,count,maxcount,max;
        len = nums.size();
        c0 = 0;
        count = 0;
        i = 0;
        j = 0;
        max = INT_MIN;
        while(j<len)
        {
            if(nums[j] == 0)
            c0++;

            while(c0 == 2)
            {
                if(nums[i] == 0)
                c0--;
                
                i++;
            }
            count = (j-i);

            if(max<count)
            max = count;
            j++;
        }
        return max;
    }
};
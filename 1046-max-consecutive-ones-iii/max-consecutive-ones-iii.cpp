class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len,i,count,j,n;
        len = nums.size();
        i = 0;
        j = 0;
        count = 0;
        n = 0;
        while(j<len)
        {
            if(nums[j] == 0)
            {
                count++;
            }

            while(count>k)
            {
                if(nums[i] == 0)
                count--;
                i++;
            }
            if((j-i)+1>n)
            n = (j-i) + 1;
            j++;
        }
        return n;
    }
};

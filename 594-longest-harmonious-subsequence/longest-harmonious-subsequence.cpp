class Solution {
public:
    int findLHS(vector<int>& nums) {
        int i,len,j,max,count;
        len = nums.size();
        sort(nums.begin(),nums.end());
        i = 0;
        j = 1;
        max = 0;
        while(j<len)
        {
            while(nums[j]-nums[i] > 1)
            {
                i++;
            }
            if(nums[j]-nums[i] == 1)
            {
                count = (j-i)+1;
                if(max<count)
                max = count;
            }
            j++;
        }
        return max;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len,i,val,count;
        len = nums.size();
        i = 0;
        val = 0;
        count = 0;
        while(i<len)
        {
            if(count == 0)
            {
                val = nums[i];
                count = 1;
            }
            else
            {if(val == nums[i])
            count++;
            else
            count--;}
            i++;
        }
        return val;
    }
};
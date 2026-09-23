class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,len,min;
        len = nums.size();
        min = INT_MAX;
        for(i=0;i<len;i++)
        {
            if(nums[i] < min)
            min = nums[i];
        }
        return min;
    }
};
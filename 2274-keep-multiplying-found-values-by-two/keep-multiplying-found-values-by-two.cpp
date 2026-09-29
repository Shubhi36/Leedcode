class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int len,i;
        len = nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<len;i++)
        {
            if(original == nums[i])
            original *= 2;
        }
        return original;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,len,j,flag;
        len = nums.size();
        vector <int> space;
        flag = 0;
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                if(j != i && (target - nums[i]) == nums[j] && flag == 0)
                {
                    flag = 1;
                    space.push_back(i);
                    space.push_back(j);
                }
            }
        }
        return space;
    }
};
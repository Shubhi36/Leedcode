class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int len,i,flag,j,ans,max,k;
        len = nums.size();
        vector <int> space(len,0);
        space[len-1] = nums[len-1];
        j = len-1;
        k = len-2;
        i = len-2;
        while(k>=0)
        {
            if(nums[k]<=nums[j])
            {
                space[i] = nums[j];
                i--;
                k--;
            }
            else
            {
                space[i] = nums[k];
                j = k;
                k--;
                i--;
            }
        }
        i = 0;
        j = 0;
        max = 0;
        while(j<len)
        {
            if(nums[i]<=space[j])
            {
                ans = j-i;
                j++;
                if(max<ans)
                max = ans;
            }
            else
            {
                i++;
            }
        }
        return max;
    }
};
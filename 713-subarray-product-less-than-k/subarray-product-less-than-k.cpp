class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long int len,i,j,pro,lw,rw,count,sw;
        len = nums.size();
        if(k == 0 or k == 1)
        return 0;
        count = 0;
        j = 0;
        i = 0;
        pro = 1;
        while(j<len)
        {
            pro = (double) pro*nums[j];
            while(pro >= k)
                {
                    pro = (pro/nums[i]);
                    i++;
                }
                count = count + ((j-i) + 1);
            
            j++;
        }
        return count;
    }
};
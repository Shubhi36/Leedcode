class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int len,i,count,j,min,remove,ans,max,mid;
        len = nums.size();
        sort(nums.begin(),nums.end());
        ans = len;
        for(i=0;i<len;i++)
        {
            min = i;
            max = len-1;
            while(min<=max)
            {
                mid = (min+max)/2;
                if(nums[mid] <= (long long)nums[i]*k)
                {
                    if(ans > len-(mid-i+1))
                    ans = len-(mid-i+1);
                    min = mid+1;
                }
                else
                max = mid-1;
            }
        }
        return ans;
    }
};

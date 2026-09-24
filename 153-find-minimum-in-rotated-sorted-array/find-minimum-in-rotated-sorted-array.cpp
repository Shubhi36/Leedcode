class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,len,min,low,high,mid;
        len = nums.size();
        low = 0;
        high = len-1;
        while(low < high)
        {
            mid = (low+high)/2;
            if(nums[low] <= nums[mid] && nums[mid] >= nums[high])
            low = mid+1;
            else
            high = mid;
        }
        return nums[low];
    }
};
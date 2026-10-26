class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int len,i,count,freq,max,low,high,mid;
        long long int sum;
        len = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        vector <long long int> prefix;
        sum = 0;
        for(i=0;i<len;i++)
        {
            sum = sum + nums[i];
            prefix.push_back(sum);
        }
        max = 0;
        for(i=0;i<len;i++)
        {
            low = i;
            high = len-1;
            freq = 1;
            while(low<=high)
            {
                mid = (low+high)/2;
                
                if(i == 0)
                sum = ((long long)nums[i]*(mid-i+1)) - prefix[mid];
                else
                sum = ((long long)nums[i]*(mid-i+1)) - (prefix[mid]-prefix[i-1]);

                if(sum <= k)
                {
                    freq = (mid-i+1);
                    low = mid+1;
                }
                else
                high = mid - 1;
            }
            if(freq>max)
            max = freq;
        }
        return max;
    }
};
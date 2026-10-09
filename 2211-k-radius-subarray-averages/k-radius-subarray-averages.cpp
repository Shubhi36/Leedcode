class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long int i ,len,j,sum,sw,ew,avg,a;
        len = nums.size();
        vector <int> space(len,-1);
        if(k == 0)
        return nums;
        if (2 * k + 1 > len)
        return space;
        i = 0;
        j = k*2;
        a = (j-i)+1;
        sum = 0;
        while(i<=j)
        {
            sum = sum + nums[i];
            i++;
        }
        avg = sum/a;
        space[k] = avg;
        k++;
        i = 1;
        while(j<len-1)
        {
            sw = i-1;
            ew = j+1;
            sum = sum-nums[sw]+nums[ew];
            avg = sum/a;
            space[k] = avg;
            k++;
            i++;
            j++;
        }
        return space;
    }
};
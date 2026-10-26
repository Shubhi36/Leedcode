class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len,i,sum,count,avg,j,sw,ew;
        len = arr.size();
        count = 0;
        sum = 0;
        for(i=0;i<k;i++)
        {
            sum = sum + arr[i];
        }
        avg = sum/k;
        if(avg >= threshold)
        count++;
        j = 0;
        while(i<len)
        {
            sw = j;
            ew = i;
            sum = (sum - arr[sw]) + arr[ew];
            avg = sum/k;
            if(avg>=threshold)
            count++;

            i++;
            j++;
        }
        return count;
    }
};
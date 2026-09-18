class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len,i,low,high,mid;
        len = arr.size();
        low = 0;
        high = len-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(arr[mid]-(mid+1) == k)
            high = mid-1;
            else if(arr[mid]-(mid+1) < k)
            low = mid+1;
            else
            high = mid-1;
        }
        return low+k;
    }
};
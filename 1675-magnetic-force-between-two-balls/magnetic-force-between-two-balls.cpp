class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int len,count,ans,min,last,j,high,low,mid;
        len = position.size();
        sort(position.begin(),position.end());
        ans = 0;
        if(m==2)
        return position[len-1] - position[0];
        low = 1;
        high = position[len-1]-position[0];

        while(low<=high)
        {
            mid = (low+high)/2;
            count = 1;
            last = position[0];
            for(j=1;j<len;j++)
            {
                if(position[j]-last >= mid)
                {
                    count++;
                    last = position[j];
                }
            }
            if(count>=m)
            {
                ans = mid;
                low = mid+1;
            }
            else
            high= mid-1;
        }
        return ans;
    }
};
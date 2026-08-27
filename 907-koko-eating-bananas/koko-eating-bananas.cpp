class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int i,len,max,j,count,min,mid,ans;
        len = piles.size();
        max = piles[0];
        for(i=1;i<len;i++)
        {
            if(max<piles[i])
            max = piles[i];
        }
        if(h == len)
        return max;
        min = 1;
        while(min<=max)
        {
            mid = (min+max)/2;
            count = 0;
            for(j=0;j<len;j++)
            {
                count = count + piles[j]/mid;
                if(piles[j]%mid != 0)
                count++;
            }
            if(count<=h)
            {ans = mid;
            max = mid-1;}
            else
            min = mid+1;
        }
        return ans;
    }
};
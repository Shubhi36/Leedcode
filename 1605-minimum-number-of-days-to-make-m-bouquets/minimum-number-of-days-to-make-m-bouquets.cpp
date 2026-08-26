class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int i,len,max,count,j,mid,b,min,ans;
        len = bloomDay.size();
        ans = -1;
        max = bloomDay[0];
        min = bloomDay[0];
        for(i=1;i<len;i++)
        {
            if(bloomDay[i]>max)
            max = bloomDay[i];
            if(bloomDay[i]<min)
            min = bloomDay[i];
        }
        if(min==max)
        return min;
        while(min<=max)
        {
            mid = (min+max)/2;
            count = 0;
            b = 0;
            for(j=0;j<len;j++)
            {
                if(bloomDay[j]<=mid)
                count++;
                else
                count = 0;
                if(count==k)
                {b++;
                count = 0;}
            }
            if(b>=m)
            {ans = mid;
            max = mid-1;}
            else
            min = mid+1;
        }
        return ans;
    }
};
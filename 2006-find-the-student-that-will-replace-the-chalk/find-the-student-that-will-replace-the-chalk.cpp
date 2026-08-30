class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int i,len,count,ans,sum;
        len = chalk.size();
        sum = 0;
        for(i=0;i<len;i++)
        {
            sum = sum +chalk[i];
        }
        k = k%sum;
        if(sum<k)
        k = abs(k-sum);
        count = 0;
        i = 0;
        while(k>=count)
        {
            if(i==len)
            i = (i%len);
            if(count+chalk[i] <= k)
            count = count+chalk[i];
            else
            {ans = i;
            break;}
            i++;
        }
        return i;
    }
};
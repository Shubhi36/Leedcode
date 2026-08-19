class Solution {
public:
    int candy(vector<int>& ratings) {
        int i,len,count;
        len = ratings.size();
        vector <int> space(len,0);
        for(i=0;i<len;i++)
        {
            space[i]++;
        }
        for(i=1;i<len;i++)
        {
            if(ratings[i-1]<ratings[i])
            space[i] = space[i-1]+1;
        }
        for(i=len-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1] && space[i] <= space[i+1])
            space[i] = space[i+1]+1;
        }
        count = 0;
        for(i=0;i<len;i++)
        {
            count = count+space[i];
        }
        return count;
    }
};
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int len,count,i;
        len = arr.size();
        {
            count = 0;
        }
        for(i=0;i<len;i++)
        {
            if(arr[i]%2 != 0)
            count++;
            else
            {
                if(count >= 3)
                return true;
                else
                count = 0;
            }
        }
        if(count >= 3)
        return true;

        return false;
    }
};
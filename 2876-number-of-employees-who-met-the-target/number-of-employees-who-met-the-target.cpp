class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int i,len,count;
        len = hours.size();
        count = 0;
        for(i=0;i<len;i++)
        {
            if(hours[i] >= target)
            count++;
        }
        return count;
    }
};
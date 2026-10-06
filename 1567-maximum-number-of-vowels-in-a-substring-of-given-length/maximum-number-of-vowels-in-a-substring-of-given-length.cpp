class Solution {
public:
    int maxVowels(string s, int k) {
        int i,j,l,len,count,maxcount;
        len = s.size();
        i = 0;
        j = 0;
        l = 0;
        count = 0;
        maxcount = INT_MIN;
        while(j < len)
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count++;
                l++;
                j++;
            }
            else
            {
                l++;
                j++;
            }
            if(maxcount < count)
            maxcount = count;
            if(l == k)
            {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    i++;
                    count--;
                    l--;
                }
                else
                {
                    i++;
                    l--;
                }
            }
        }
        return maxcount;
    }
};
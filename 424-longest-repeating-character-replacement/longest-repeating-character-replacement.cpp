class Solution {
public:
    int characterReplacement(string s, int k) {
        int len,i,ch,max,count,j,n;
        len = s.size();
        max = 0;
        for(ch='A';ch<='Z';ch++)
        {
            count = 0;
            j = 0;
            i = 0;
            while(j<len)
            {
                if(ch != s[j])
                count++;
                
                if(count>k)
                {
                    if(ch != s[i])
                    count--;
                    i++;
                }
                n = (j-i)+1;
                if(max<n)
                max = n;
                j++;
            }
        }
        return max;
    }
};
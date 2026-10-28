class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len,i,count,maxsize,currentsize,j;
        len = s.size();
        if(len == 1)
        return 1;
        maxsize = 0;
        vector <int> alpha(128,0);
        i = 0;
        j = 0;
        while(j<len)
        {
            if(alpha[s[j]] == 0)
            {
                alpha[s[j]]++;
                currentsize = (j-i)+1;
            }
            else
            {
                alpha[s[j]]++;
                while(alpha[s[j]] == 2)
                {
                    alpha[s[i]]--;

                    i++;
                }
                currentsize = (j-i)+1;
            }
            if(currentsize>maxsize)
            maxsize = currentsize;
            j++;
        }
        return maxsize;
    }
};
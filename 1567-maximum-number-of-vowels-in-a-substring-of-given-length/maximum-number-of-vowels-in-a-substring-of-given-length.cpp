class Solution {
public:
    int maxVowels(string s, int k) {
        int len,i,j,maxcount,count;
        len = s.size();
        j = 0;
        count = 0;
        while(j < k)
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            count++;

            j++;
        }
        i = 0;
        j = k - 1;
        maxcount = count;
        while(j < len)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count--;

            i++;
            j++;

            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            count++;

            if(maxcount < count)
            maxcount = count;
        }
        return maxcount;
    }
};
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i,len,j,k,flag,len2;
        len = words.size();
        for(i=0;i<len;i++)
        {
            len2 = words[i].size();
            k = len2-1;
            j = 0;
            flag = 0;
            while(j < k)
            {
                if(words[i][j] != words[i][k])
                flag = 1;

                j++;
                k--;
            }
            if(flag == 0)
            return words[i];
        }
        return ("");
    }
};
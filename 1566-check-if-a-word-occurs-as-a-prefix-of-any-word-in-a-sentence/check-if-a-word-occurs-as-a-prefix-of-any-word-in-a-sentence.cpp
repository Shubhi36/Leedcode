class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len,i,count,flag,j,ans;
        len = sentence.size();
        i = 0;
        j = 0;
        count = 1;
        ans = -1;
        while(i<len)
        {
            if(i != 0 && sentence[i] == ' ')
            {count++;
            i++;}
            else if((i == 0 || sentence[i-1] == ' ') && sentence[i] == searchWord[j])
            {
                j = 0;
                flag = 0;
                while(searchWord[j] != '\0' && flag == 0)
                {
                    if(sentence[i] == searchWord[j])
                    {i++;
                    j++;}
                    else
                    {flag = 1;
                    j = 0;}
                }
                if(flag == 0)
                ans = count;
            }
            else
            i++;
        }
        return ans;
    }
};
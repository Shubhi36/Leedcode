class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i,len,max,count,j;
        len = sentences.size();
        max = INT_MIN;
        for(i=0;i<len;i++)
        {
            count = 1;
            for(j=0;sentences[i][j] != '\0';j++)
            {
                if(sentences[i][j] == ' ')
                count++;
            }
            if(count > max)
            max = count;
        }
        return max;
    }
};
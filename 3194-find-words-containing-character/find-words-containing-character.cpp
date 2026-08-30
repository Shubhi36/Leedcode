class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i,len,j,flag;
        len = words.size();
        vector <int> space;
        for(i=0;i<len;i++)
        {
            flag = 0;
            for(j=0;words[i][j]!='\0';j++)
            {
                if(words[i][j] == x && flag==0)
                {
                    space.push_back(i);
                    flag = 1;
                }
            }
        }
        return space;
    }
};
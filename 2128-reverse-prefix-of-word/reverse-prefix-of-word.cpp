class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i,len,flag,j;
        len = word.size();
        char temp;
        flag = 0;
        for(i=0;i<len&&flag==0;i++)
        {
            if(word[i] == ch)
            {j = i;
            flag = 1;}
        }
        if(flag == 0)
        return string(word.begin(),word.end());
        i = 0;
        while(i<=j)
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        return string(word.begin(),word.end());
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i,j,len1,len2;
        len1 = word1.size();
        len2 = word2.size();
        vector <char> space;
        i = 0;
        j = 0;
        while(word1[i] != '\0' && word2[j] != '\0')
        {
            space.push_back(word1[i]);
            i++;
            space.push_back(word2[j]);
            j++;
        }
        while(i<len1)
        {
            space.push_back(word1[i]);
            i++;
        }
        while(j<len2)
        {
            space.push_back(word2[j]);
            j++;
        }
        return string(space.begin(), space.end());
    }
};
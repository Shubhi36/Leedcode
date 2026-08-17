class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <int> space(26,0);
        int i;
        for(i=0;sentence[i] != '\0';i++)
        {
            space[sentence[i] - 'a'] = 1;
        }
        for(i=0;i<26;i++)
        {
            if(space[i] != 1)
            return false;
        }
        return true;
    }
};
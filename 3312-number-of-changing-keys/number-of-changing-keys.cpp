class Solution {
public:
    int countKeyChanges(string s) {
        int i,count;
        for(i=0;s[i]!='\0';i++)
        {
            s[i] = tolower(s[i]);
        }
        count = 0;
        for(i=0;s[i+1]!='\0';i++)
        {
            if(s[i]!=s[i+1])
            count++;
        }
        return count;
    }
};
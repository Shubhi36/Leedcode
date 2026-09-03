class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i,j,len1,len2;
        i = 0;
        j = 0;
        len1 = name.size();
        len2 = typed.size();
        if(name[0] != typed[0])
        return false;
        while(i<len1 || j<len2)
        {
            if(typed[j] == name[i])
            {
                i++;
                j++;
            }
            else if(typed[j] != name[i])
            {
                if(typed[j] == typed[j-1])
                j++;
                else
                return false;
            }
        }
        return true;
    }
};